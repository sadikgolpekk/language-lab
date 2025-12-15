# Girilen 2 sayıdan hangisi büyüktür?
sayi1=int(input(" 1.sayi "))
sayi2=int(input(" 2.sayi "))

if sayi1>sayi2:
    print("İlk sayi büyüktür")

elif sayi1==sayi2:
    print("Sayilar birbirine eşittir")

else:
    print("İkinci sayi büyüktür")


# Girilen bir sayının tek çift kontrolünü yapınız

tekCift=int(input("Bir sayi giriniz"))

if tekCift%2==0:
    print("Sayimiz cift sayidir")

else:
    print("Sayimiz tek sayidir.")

# Bir öğrencinin girilen 3 notuna göre başarı durumu kontrolü ediniz,50 ve üstünde başarılı.
not1=int(input("not 1: "))
not2=int(input("not 2: "))
not3=int(input("not 3: "))

ortalama=(not1+not2+not3)/3

print("ortalama ",ortalama)

if ortalama >=50:
    print("Ogrencimiz basarilidir.")

else:
    print("Sınıf tekrarı")