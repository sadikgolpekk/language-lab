programlama_dilleri=["Python","C#","Java","JavaScript"]

sonuc=programlama_dilleri
print(sonuc)

sonuc=type(programlama_dilleri)
print(sonuc)

sonuc=programlama_dilleri[0]
print(sonuc)

sonuc=programlama_dilleri[0:2]
print(sonuc)

sonuc=programlama_dilleri[:]
print(sonuc)


# güncelleme
programlama_dilleri[-1]="Php"
sonuc=programlama_dilleri
print(sonuc)

sonuc=len(programlama_dilleri)
print(sonuc)

sonuc=programlama_dilleri+["Go","Delphi"]
print(sonuc)


# Koşul ifadesi,Var mı Yok mu ?
sonuc="Python" in programlama_dilleri
print(sonuc)

sonuc="React" in programlama_dilleri
print(sonuc)


del programlama_dilleri[0]


# Döngü ile gösterme

for dil in programlama_dilleri:
    print(dil)

