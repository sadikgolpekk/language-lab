def selamlama(isim="Kullanıcı",mesaj="İyi günler"):
    return f"{mesaj} {isim}"


sonuc=selamlama("Sadık","Merhaba")
print(sonuc)

sonuc=selamlama("Ali","Selam")
print(sonuc)

sonuc=selamlama("Ali") ## override
print(sonuc)

sonuc=selamlama()
print(sonuc)