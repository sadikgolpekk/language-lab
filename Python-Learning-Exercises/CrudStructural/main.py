from fastapi import FastAPI, Body, Path, Query, HTTPException
from typing import Optional
from pydantic import BaseModel, Field
from starlette import status

app = FastAPI()

class Course(BaseModel):
    id: int
    title: str
    instructor: str
    rating: int
    published_date: int


from typing import Optional, Annotated
from pydantic import BaseModel, Field

class CourseRequest(BaseModel):
    id: Optional[int] = Field(default=None, description="The id of the course, optional")
    title: str = Field(min_length=3, max_length=100)
    instructor: str = Field(min_length=3)
    rating: int = Field(gt=0, lt=6)
    published_date: Annotated[int, Field(ge=2020, le=2100)]

    model_config = {
        "json_schema_extra": {
            "example": {
                "title": "course title",
                "instructor": "atil samancioglu",
                "rating": 5,
                "published_date": 2020
            }
        }
    }

courses_db = [
    Course(id=1, title="Python", instructor="Atil", rating=5, published_date=2029),
    Course(id=2, title="Kotlin", instructor="Ahmet", rating=5, published_date=2026),
    Course(id=3, title="Jetkins", instructor="Atil", rating=5, published_date=2023),
    Course(id=4, title="Kubernetes", instructor="Zeynep", rating=2, published_date=2030),
    Course(id=5, title="Machine Learning", instructor="Fatma", rating=3, published_date=2036),
    Course(id=6, title="Deep Learning", instructor="Atlas", rating=1, published_date=2039),
]

@app.get("/courses", status_code=status.HTTP_200_OK)
async def get_all_courses():
    return courses_db


@app.get("/courses/{course_id}", status_code=status.HTTP_200_OK)
async def get_course(course_id:int =Path(gt=0)):
    for course in courses_db:
        if course_id ==course_id:
            return course

    raise HTTPException(status_code=status.HTTP_404_NOT_FOUND,detail="Course not found")

@app.get("/courses/", status_code=status.HTTP_200_OK)
async def get_courses_by_rating(course_rating:int =Query(gt=0,lt=6)):
    courses_to_return=[]
    for course in courses_db:
        if course.rating==course_rating:
            courses_to_return.append(course)

    return courses_to_return


@app.get("/courses/", status_code=status.HTTP_200_OK)
async def get_courses_by_publish_date(publish_date:int =Query(gt=2005,lt=2040)):
    courses_to_return=[]
    for course in courses_db:
        if course.published_date==publish_date:
            courses_to_return.append(course)
    return courses_to_return


@app.get("/courses/",status_code=status.HTTP_200_OK)
async def get_courses_by_rating(course_rating:int=Query(gt=0,lt=6)):
    courses_to_return=[]
    for course in courses_db:
        if course.rating==course_rating:
            courses_to_return.append(course)

        return courses_to_return


@app.get("/courses/",status_code=status.HTTP_200_OK)
async def get_courses_by_publish_date(publish_date:int=Query(gt=2005,lt=2040)):
    courses_to_return=[]
    for course in courses_db:
        if course.publish_date==publish_date:
            courses_to_return.append(course)

        return courses_to_return


@app.post("/create-course", status_code=status.HTTP_201_CREATED)
async def create_course(course_request: CourseRequest):

    course_data = course_request.model_dump(exclude_none=True)

    new_id = 1 if len(courses_db) == 0 else courses_db[-1].id + 1

    new_course = Course(**course_data, id=new_id)

    courses_db.append(new_course)
    return new_course

def find_course_id(course: Course):
    course.id=1 if len(courses_db)== 0 else courses_db[-1].id +1
    return course


@app.put("/courses/update_course",status_code=status.HTTP_204_NO_CONTENT)
async def update_course(course_request:CourseRequest):
    course_updated=False
    for i in range(len(courses_db)):
        if courses_db[i].id == course_request.id:
            courses_db[i]=course_request
            course_updated=True

    if not course_updated:
        raise HTTPException(status_code=status.HTTP_404_NOT_FOUND,detail="Course not found")


@app.delete("/courses/delete/{course_id}", status_code=status.HTTP_204_NO_CONTENT)
async def delete_course(course_id: int = Path(gt=0)):

    for course in courses_db:
        if course.id == course_id:
            courses_db.remove(course)
            return

    raise HTTPException(
        status_code=status.HTTP_404_NOT_FOUND,
        detail="Course not found"
    )