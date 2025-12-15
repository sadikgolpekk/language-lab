def toplam(*args):
    print(args)
    print(type(args))
    sonuc=0
    for i in args:
        sonuc+=i
    return sonuc

sonuc=toplam(10,20)
print(sonuc)
sonuc=toplam(10,20,30)
print(sonuc)
sonuc=toplam(10,20,30,40)
print(sonuc)
