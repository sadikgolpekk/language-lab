def selamlama(isim):
    return "merhaba "+isim


print(selamlama("sadık"))
print(selamlama("mehmet"))

def toplam(sayi1,sayi2):
    return sayi1+sayi2


print(toplam(10,20))
print(toplam(10,40))

def yasHesapla(dogumYili):
    return 2024-dogumYili


def emekliligeKacYilKaldi(dogumYili,isim):
    yas=yasHesapla(dogumYili)

    kalanSure=65-yas
    
    if kalanSure >0:
        return f"{isim},emekliliginize {kalanSure} yil kaldı"
      
    else:
        return f"{isim},zaten {abs(kalanSure)} yil önce emekli oldunuz"
    

print(emekliligeKacYilKaldi(1983,"SADIK"))
print(emekliligeKacYilKaldi(1985,"Ali"))
print(emekliligeKacYilKaldi(2000,"Ayşe"))


print(yasHesapla(1983))
print(yasHesapla(1985))
print(yasHesapla(2000))