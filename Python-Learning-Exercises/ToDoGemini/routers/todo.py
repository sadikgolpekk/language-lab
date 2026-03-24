import os
from dotenv import load_dotenv

from fastapi import APIRouter, Depends, HTTPException, Path, Request
from starlette import status
from starlette.responses import RedirectResponse
from starlette.templating import Jinja2Templates

from langchain_core.messages import HumanMessage
from langchain_google_genai import ChatGoogleGenerativeAI

from models import Todo
from database import SessionLocal
from typing import Annotated
from sqlalchemy.orm import Session
from pydantic import BaseModel, Field
from routers.auth import get_current_user

router = APIRouter(prefix="/todo", tags=["Todo"])

templates = Jinja2Templates(directory="templates")

# -----------------------------
# Pydantic Model
# -----------------------------
class TodoRequest(BaseModel):
    title: str = Field(min_length=3)
    description: str = Field(min_length=3, max_length=1000)
    priority: int = Field(gt=0, lt=6)
    complete: bool


# -----------------------------
# DB Dependency
# -----------------------------
def get_db():
    db = SessionLocal()
    try:
        yield db
    finally:
        db.close()


db_dependency = Annotated[Session, Depends(get_db)]
user_dependency = Annotated[dict, Depends(get_current_user)]


# -----------------------------
# Helpers
# -----------------------------
def redirect_to_login():
    response = RedirectResponse(
        url="/auth/login-page",
        status_code=status.HTTP_302_FOUND
    )
    response.delete_cookie("access_token")
    return response


# -----------------------------
# TEMPLATE ROUTES
# -----------------------------
@router.get("/todo-page")
async def render_todo_page(request: Request, user: user_dependency, db: db_dependency):
    if user is None:
        return redirect_to_login()

    todos = db.query(Todo).filter(Todo.owner_id == user.get("id")).all()

    return templates.TemplateResponse(
        "todo.html",
        {"request": request, "todos": todos, "user": user}
    )


@router.get("/add-todo-page")
async def render_add_todo_page(request: Request, user: user_dependency):
    if user is None:
        return redirect_to_login()

    return templates.TemplateResponse(
        "add-todo.html",
        {"request": request, "user": user}
    )


@router.get("/edit-todo-page/{todo_id}")
async def render_edit_todo_page(
    request: Request,
    todo_id: int,
    user: user_dependency,
    db: db_dependency
):
    if user is None:
        return redirect_to_login()

    todo = db.query(Todo).filter(
        Todo.id == todo_id,
        Todo.owner_id == user.get("id")
    ).first()

    return templates.TemplateResponse(
        "edit-todo.html",
        {"request": request, "todo": todo, "user": user}
    )


# -----------------------------
# API ENDPOINTS
# -----------------------------
@router.get("/read_all", status_code=status.HTTP_200_OK)
async def read_all(user: user_dependency, db: db_dependency):
    if user is None:
        raise HTTPException(status_code=401)

    return db.query(Todo).filter(Todo.owner_id == user.get("id")).all()


@router.get("/get_by_id/{todo_id}", status_code=status.HTTP_200_OK)
async def read_by_id(
    user: user_dependency,
    db: db_dependency,
    todo_id: int = Path(gt=0)
):
    if user is None:
        raise HTTPException(status_code=401)

    todo = db.query(Todo).filter(
        Todo.id == todo_id,
        Todo.owner_id == user.get("id")
    ).one_or_none()

    if todo:
        return todo

    raise HTTPException(status_code=404, detail="Todo not found")


@router.post("/create_todo", status_code=status.HTTP_201_CREATED)
async def create_todo(
    user: user_dependency,
    db: db_dependency,
    todo_request: TodoRequest
):
    if user is None:
        raise HTTPException(status_code=401)

    todo = Todo(
        **todo_request.model_dump(),
        owner_id=user.get("id")
    )

    db.add(todo)
    db.commit()


@router.put("/update_todo/{todo_id}", status_code=status.HTTP_204_NO_CONTENT)
async def update_todo(
    user: user_dependency,
    db: db_dependency,
    todo_request: TodoRequest,
    todo_id: int = Path(gt=0)
):
    if user is None:
        raise HTTPException(status_code=401)

    todo = db.query(Todo).filter(
        Todo.id == todo_id,
        Todo.owner_id == user.get("id")
    ).first()

    if not todo:
        raise HTTPException(status_code=404, detail="Todo not found")

    todo.title = todo_request.title
    todo.description = todo_request.description
    todo.priority = todo_request.priority
    todo.complete = todo_request.complete

    db.commit()


@router.delete("/delete_todo/{todo_id}", status_code=status.HTTP_204_NO_CONTENT)
async def delete_todo(
    user: user_dependency,
    db: db_dependency,
    todo_id: int = Path(gt=0)
):
    if user is None:
        raise HTTPException(status_code=401)

    todo = db.query(Todo).filter(
        Todo.id == todo_id,
        Todo.owner_id == user.get("id")
    ).first()

    if not todo:
        raise HTTPException(status_code=404, detail="Todo not found")

    db.delete(todo)
    db.commit()


# -----------------------------
# GEMINI AI FUNCTION
# -----------------------------
def create_todo_with_gemini(todo_string: str):
    load_dotenv()

    llm = ChatGoogleGenerativeAI(
        model="gemini-pro",
        google_api_key=os.getenv("GOOGLE_API_KEY")
    )

    response = llm.invoke([
        HumanMessage(content="Convert this into a structured todo item:"),
        HumanMessage(content=todo_string)
    ])

    return response.content


# -----------------------------
# TEST
# -----------------------------
if __name__ == "__main__":
    print(create_todo_with_gemini("learn python"))