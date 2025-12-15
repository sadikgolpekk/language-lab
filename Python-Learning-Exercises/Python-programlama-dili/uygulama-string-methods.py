kursAdi="Btk Akademi Python ile Programlama Dersleri"
website="https://www.btkakademi.gov.tr/"


# '   Btk Akademi  ' karakter dizisinin baş ve sondaki boşluk karakterlerini siliniz.


kelime=' Btk Akademi  '

cevap=kelime.strip()
print(cevap)



# kursAdi değişkenindeki tüm karakterleri küçük harfe çeviriniz

cevap=kursAdi.lower()
print(cevap)



# website değişkeninde kaç tane '.' karakteri vardır

cevap=website.count('.')
print(cevap)


# website değişkeni 'htpps' ile mi başlıyor

cevap=website.startswith('https')
print(cevap)


# website 'tr' ile mi bitiyor

cevap=website.endswith('tr')
print(cevap)


# kursAdi içerisindeki tüm karakterler harflerden mi oluşuyor

cevap=kursAdi.isalpha()
print(cevap)

# kursAdi değişkenindeki tüm boşlukları '-' ile değiştiriniz

cevap=kursAdi.replace(" ",'-')
print(cevap)

# kursAdi değişkenindeki Python keslimesini ReactJs ile değiştiriniz.

cevap=kursAdi.replace("Python","ReactJs")
print(cevap)


# website değişkeni 'www' içeriyor mu

cevap=website.find('www') # index no.
print(cevap)


# kursAdi değişkenini listeye çeviriniz

cevap=kursAdi.split()
print(cevap)
print(cevap[0])
print(cevap[1])
print(cevap[2])