mesaj="  btk akademi python kursu"

sonuc=mesaj.upper() # tüm harfleri büyütür
print(sonuc)

sonuc=mesaj.lower() # tüm harfleri küçültür
print(sonuc)

sonuc=mesaj.title() # Her kelimenin ilk harfini büyük yapar
print(sonuc)

sonuc=mesaj.capitalize() # Sadece ilk harfi büyük yapar, diğerlerini küçük yapar,ama başta boşluk olduğu için çalışmaz.
print(sonuc)

sonuc="abc".islower() # Bütün karakterler küçük mü? diye kontrol eder.
print(sonuc)

sonuc=mesaj.strip() # Başındaki ve sonundaki boşlukları siler.
print(sonuc)

sonuc=mesaj.split() # Boşluklara göre parçalar, liste yapar.
print(sonuc)


sonuc=mesaj.split()[0] # Yukarıdaki listenin ilk elemanını verir.
print(sonuc)

sonuc=mesaj.index("akademi") #"akademi" ifadesinin mesaj içinde kaçıncı karakterden başladığını verir.
print(sonuc)


sonuc=mesaj.startswith("a") # Metin "a" harfiyle mi başlıyor?
print(sonuc)

sonuc=mesaj.endswith("u") # Metin "u" harfiyle mi bitiyor?
print(sonuc)

sonuc=mesaj.replace("python","javascript") # Metindeki "python" kelimesini "javascript" ile değiştirir
print(sonuc)