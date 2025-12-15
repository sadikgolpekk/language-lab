# "Toyata,Bmw,Renault,Mercedes" elemanlarına sahip markalar isimli bir liste oluşturunuz.

cars=["Toyata","Bmw","Renault","Mercedes"]


# Liste kaç elemanlıdır
sonuc=len(cars)
print(sonuc)
# Listenin ilk ve son elemanı nedir

print(cars[0]) # ilk
print(cars[-1]) # son 


# Renault markasını Togg ile güncelleyiniz
cars[2]="Togg"
print(cars)


# Togg listenin bir elemanı mıdır
sonuc="Togg" in cars
print(sonuc)

# Listenin ilk 2 elemanını alınız
sonuc=cars[0:2]
print(sonuc)

# Listenin sonuna Ford ve Citroen markalarını ekleyiniz.
sonuc=cars +["Ford", "Citroen"] # listeye ekleme
print(sonuc)
# Listenin son elemanının siliniz
del cars[-1]
sonuc=cars
print(sonuc)

# Aşağıdaki verileri liste içinde saklayınız 

  # öğrenci1: Yiğit Bilgi 2010 [70,80,90]
  # öğrenci2: Ada Bilgi 2011 [70,70,80]
  # öğrenci3: Çınar Turan 2017 [60,60,90]
 
ogrenci1=["Yiğit","Bilgi",2010,[70,80,90]]
ogrenci2=["Ada","Bilgi",2012,[70,70,60]]
ogrenci3=["Çınar","Turan",2017,[60,60,90]]

ogrenciler=[ogrenci1,ogrenci2,ogrenci3]

# Öğrencilerin yaşlarını hesaplayınız
yasYigit=2025-ogrenci1[2]
yasAda=2025-ogrenci2[2]
yasCinar=2025-ogrenci3[2]

print(yasYigit,yasAda,yasCinar)

# öğrencilerin not ortalamalarını hesaplayınız.

notYigit=(ogrenciler[0][3][0]+ogrenciler[0][3][1]+ogrenciler[0][3][2])/3
notAda=(ogrenciler[1][3][0]+ogrenciler[1][3][1]+ogrenciler[1][3][2])/3
notCinar=(ogrenciler[2][3][0]+ogrenciler[2][3][1]+ogrenciler[2][3][2])/3

print(notYigit,notAda,notCinar)
