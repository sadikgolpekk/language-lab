# local scope
# global scope


x="global scope"

def my_func():
    x="local scope"
    print(x)

my_func()
print(x)