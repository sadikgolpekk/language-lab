# kendisine gönderilen bir kelimeyi belirilen kez ekranda gösteren fonksiyonu yazınız.
def yazdir(text,adet):
    for a in range(0,adet):
        print(text)


yazi=input("Bir yazi giriniz: ")
adet=int(input("Kaç kere görmek istiyorsunuz: "))
yazdir(yazi,adet)


# çember alan ve çevresini hesaplayan fonksiyonu yazınız.

r=int(input("Yariçap değeri giriniz"))
pi=3.14

alan=pi*(r**2)
cevre=2*pi*r

print("alan değeri ",alan)
print("cevre değeri",cevre)


# yazı tura uygulamasını fonksiyon kullanarak yapınız(Random modülü)
def yaziTura():
    import random
    sayi=random.random()
    print(sayi)

    if sayi>0.5:
        return "yazi"
    else:
        return "tura"
    
sonuc=yaziTura()
print(sonuc)

# kendisine gönderilen 2 sayı arasındaki tüm asal sayıları bulan fonksiyonu yazınız.

def asalsayiBul(start,end):
    
    for a in range(start,end+1):
        asal=1

        if a < 2:
            continue  # 0 ve 1 asal değil

        for b in range(2,a):
            if a%b==0:
                asal=0
        
        if(asal==1):
            print(a,"asaldir")


ilk=int(input("başlangıç değeri giriniz: "))
son=int(input("bitiş değeri giriniz:"))
asalsayiBul(ilk,son)


# kendisine gönderilen bir sayının tam bölenlerini bir liste şeklinde döndüren fonksiyonu yazınız.

def tamBolenleriBul(sayi):
    tamBolenler=[]

    for i in range(2,sayi):
        if(sayi%i==0):
            tamBolenler.append(i)

    return tamBolenler
    
print(tamBolenleriBul(20))