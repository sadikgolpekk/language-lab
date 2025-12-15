# bir aracın yakıt tipine göre(benzin,dizel,lpg) belirtilen bir mesafede ne kadar yakıt masrafı olduğunu hesaplayan uygulamayı yapınız.
# benzin: 39.35
# dizel: 41.71
# lpg: 20.28

yakitTipi=input("Yakit tipi giriniz(benzin,dizel,lpg): ")

if yakitTipi=="benzin":
    masraf=39.35

elif yakitTipi=="dizel":
    masraf=41.71

elif yakitTipi=="lpg":
    masraf=20.28

else:
    masraf=0

print(yakitTipi,masraf)




# bir öğrencinin 2 yazılı bir sözlü notunu alarak ortalama hesaplayınız ve hesaplanan ortalamaya göre not aralığına karşılık gelen değerlendirmeyi yazdırınız.

# 0-24 --> 0
# 25-44 --> 1
# 45-54 --> 2
# 55-69 --> 3
# 70-84 --> 4
# 85-100 --> 5

yazili=int(input("Yazili notunu giriniz: "))
sozlu=int(input("Sözlü notunu giriniz: "))

ort=(yazili+sozlu)/2

if(85<=ort<=100):
    puan=5
elif(70<=ort<85):
    puan=4
elif(55<=ort<70):
    puan=3
elif(45<=ort<55):
    puan=2
elif(25<=ort<45):
    puan=1
elif(0<=ort<25):
    puan=0
else:
    puan=-1
    
print("puanınız: ",puan)