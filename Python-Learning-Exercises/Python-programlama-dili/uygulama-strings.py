title="Python ile Programlama Dersleri"

# title değişkeni içindeki karakter sayısı

adet=len(title)
print(adet)

# title içerisindeki 'Python' kelimesini alın
print(title[:6])

# title değişkeninin ilk 5 ve son 5 karakterini alın
print(title[:6]) # ilk 5
print(title[-5:]) # son 5

# cümleyi tersten yazdırınız
print(title[::-1])

# Klavyeden girilen öğrenci bilgisine göre örnek verilen cümleyi yazdırınız.
# Örnek: Çınar Turan isimli öğrencinin 1.notu 60,2.notu 60 ve not ortalaması 60 olarak hesaplanmıştır.


ad=input('ad: ')
soyad=input('soyad: ')
not1=input('1.not: ')
not2=input('2.not: ')
ortalama=(float(not1)+float(not2))/2

sonuc=f"{ad} {soyad} isimli öğrencinin 1.notu {not1},2.notu {not2} ve not ortalaması {ortalama} olarak hesaplanmıştır."
print(sonuc)