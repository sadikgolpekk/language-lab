def display_user(*args):
    print(type(args))
    print(args)

display_user()

def display_user(**kwargs):
    print(type(kwargs))
    print(kwargs)

display_user()