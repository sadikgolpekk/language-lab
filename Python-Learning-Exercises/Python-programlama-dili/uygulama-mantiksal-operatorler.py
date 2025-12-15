# yaşı 18 den büyük ya da veli izni varsa bir işte çalışabilir durumunu kontrol ediniz.

yas=int(input("Yaşınızı giriniz: "))

veli_izni=(input("Veli izni var mi ?: "))

if veli_izni.lower() =="evet":
    veli_izni=True

else:
    veli_izni=False


if yas>18 or veli_izni==True:
    print("calisabilir")

else:
    print("calisamaz")

# ders notu 50-100 arasında ise geçti değil ise kalsın bilgisini yazdırınız

dersNotu=int(input("Ders notunuzu giriniz: "))

if 100>dersNotu>50:
    print("Geçti")

else:
    print("Kaldi")



# not ortalaması en az 70 puan ve zayıfı yoksa teşekkür belgesi alabilme durumunu kontrol ediniz.

ort=int(input("Not ortalamasini giriniz: "))


zayif=(input("Zayifi var mi ?: "))

if zayif.lower() =="evet":
    zayif=True

else:
    zayif=False


if ort>=70 and zayif==False:
    print("Teşekkür belgesi alabilir")

else:
    print("Teşekkür alamaz")


# işe girmek için en az önlisans ya da lisans mezunu olma durumunu kontrol ediniz,sigara kullanmama koşulu

egitim="önlisans"
sigara_icme=False

sonuc=(egitim=="önlisans" or egitim=="lisans" and (not(sigara_icme)))

