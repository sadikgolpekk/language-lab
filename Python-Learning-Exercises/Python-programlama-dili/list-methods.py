sayilar=[4,6,8,2,56,78,90]
isimler=['ahmet','canan','zeynep','gökhan']
sonuc=min(sayilar)
sonuc=min(isimler)
sonuc=max(isimler)
sonuc=max(sayilar)


sayilar.append(12) # ekleme
isimler.append('çınar')

sayilar.insert(0,100) # 0.indexe 100 ekleme
sonuc=sayilar

print(sonuc)

sayilar.insert(len(sayilar),100) # en sona ekleme
sonuc=sayilar

print(sonuc)

sayilar.pop() # silme işlemi,parametre almaz ise sondan,alır ise istediğimiz bir yerden silinir.
print(sonuc)

isimler.remove('canan') # value(değer) bazlı silme.

sonuc=isimler

print(sonuc)

sayilar.sort() # sıralama yapar
sonuc=sayilar

print(sonuc) 