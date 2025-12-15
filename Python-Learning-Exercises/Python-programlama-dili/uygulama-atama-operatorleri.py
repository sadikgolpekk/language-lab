a,b,c=4,8,(12,2)

# 1- Kullanıcıdan aldığınız 2 sayının çarpımı ile a,b,c toplamının farkı nedir ?
sayi1=int(input("İlk sayiyi giriniz: "))
sayi2=int(input("İkinci sayiyi giriniz: "))

carpim=sayi1*sayi2

toplam=a+b+c[0]+c[1]

sonuc=carpim-toplam

print(sonuc)


# 2- c' nin b' ye kalansız bölümünü hesaplayınız

sonuc=(c[0]+c[1])//b
print(sonuc)


# 3- (a,b,c) toplamının mod 7'si nedir ?

sonuc=(a+b+c[0]+c[1])%7
print(sonuc)


# 4- b'nin a.kuvvetini hesaplayınız

sonuc=b**a
print(sonuc)

# 5- a,*b,c=(2,4,6,8,13) işlemine göre c'nin küpü nedir ?

a,*b,c=(2,4,6,8,13)

print(a,*b,c)

# 6- a,b,*c=(2,4,6,8,13) işlemine göre c'nin değerleri toplamı nedir ?

a,b,*c=(2,4,6,8,13)

print(c[0]+c[1]+c[2])