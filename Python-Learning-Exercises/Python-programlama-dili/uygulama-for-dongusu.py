sayilar=[3,5,7,2,12,32,45]

# 1-"sayilar" listesindeki her bir elemanı yazdiriniz.

for a in sayilar:
    print(a)



# 2-"sayilar" listesinde hangi sayilar 3'ün katıdır ?
for a in sayilar:
    if a%3==0:
        print(a,"sayisi 3'ün katidir")

# 3-"sayilar" listesinde tüm sayiların toplamı nedir ?
toplam=0
for a in sayilar:
    toplam+=a

print(toplam)

urunler=["samsung s24","samsung s22","iphone 15","iphone 14"]

# "urunler" listesindeki tüm iphone marka ürünleri listeleyiniz ?

for urun in urunler:
    index=urun.find('iphone')
    if index > -1:
        print(urun)
    
      


# "urunler" listesinde kaç adet samsung ürünü vardır ?

adet=0

for urun in urunler:
    index=urun.find('samsung')
    if index > -1:
        adet+=1

print(adet)