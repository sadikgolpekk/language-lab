# başlangıç ve bitiş değerlerini kullancıdan alınız ve bu değerler arasındaki tüm çift sayıları yazdırınız.
start=int(input("başlangıç değeri giriniz: "))
end=int(input("bitiş değeri giriniz: "))

i=start
while(i<end):
    if(i%2==0):
        print(i)
    
    i+=1


# (1-100) arasındaki sayıları azalan şekilde yazdırınız.

sayi=100

while(sayi>=1):
    print(sayi)
    sayi-=1

# kullanıcıdan alacağınız 5 sayıyı ekranda sıralı bir şekilde yazdırın.
i = 0
dizi = []

while i < 5:
    sayi = int(input(f"{i+1}. sayıyı giriniz: "))
    dizi.append(sayi) # eklemek lazım
    i += 1

# sıralı bir şekilde yazdırmak için sort kullan,küçükten büyüğe
dizi.sort()

print("Sıralı sayılar:", dizi)


    
    



# klavyeden girişi istenen username bilgisi için boşluk girildiği sürece tekrar username girişi isteyiniz.

username=""

while not username:
    username=input("kullanıcı adı: ")

print("girilen username: "+username)