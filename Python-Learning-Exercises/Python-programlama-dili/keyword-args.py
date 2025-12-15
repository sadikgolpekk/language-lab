def full_name(firstname:str,lastname:str,age:int)->str:
    return f"your name is {firstname} {lastname} {age}"


sonuc=full_name("Sadık","Turan",age=10)
sonuc=full_name(lastname="Turan",firstname="SADIK",age=20)
print(sonuc)