# string concat
ad="Sadık"
soyad="Gölpek"
yas=40

msj="My name is "+ad+" "+ soyad+ ""+" I'm "+str(yas)+" years old."
print(msj)
# string formatlama

msj="My name is {a} {s}.I'm {y} years old.".format(a=ad,s=soyad,y=yas)

print(msj)

# f-string

msj=f"My name is {ad} {soyad}.I'M {yas} years old."
print(msj)