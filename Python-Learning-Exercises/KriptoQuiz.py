# 4.grup
# 230201040 Sadık Gölpek
# 230201114 Mehmet Eker
# 230201099 Abdullah Önder
# 230201065 Ali Kılınç

import random

S_box = {
    0:12, 1:5, 2:6, 3:11,
    4:9, 5:0, 6:10, 7:13,
    8:3, 9:14, 10:15, 11:8,
    12:4, 13:7, 14:1, 15:2
}

def s_box(dizi):
    dizi2 = []
    for a in dizi:
        dizi2.append(S_box[a])   
    return dizi2

dizi=[]

for i in range(32):
    a=random.randint(0,15)
    dizi.insert(i,a)



print("Giriş :", dizi)

sonuc = s_box(dizi)
print("Çıkış :", sonuc)


for a in sonuc:
    print(bin(a)[2:].zfill(4))



binary_128_bit = []

for a in sonuc:
    binary_128_bit += format(a, '04b')

print("128 bit",binary_128_bit)


ilk64=[]
ikinci64=[]


def ikiyebolme(dizi,dizi2,dizi3):
    for i in range(128):
        if i<64:
            dizi2.insert(i,dizi[i])
        else :
            dizi3.insert(i,dizi[i])

ikiyebolme(binary_128_bit,ilk64,ikinci64)







for i in range(64):
    if i!=63:
        binary_128_bit[i]=binary_128_bit[16*i%63]
    if i ==63:
        binary_128_bit[i]=binary_128_bit[63] 

for i in range(64):
    if i!=63:
        binary_128_bit[i+64]=binary_128_bit[16*i%63]
    if i ==63:
        binary_128_bit[i+64]=binary_128_bit[63]    

print("difüzyon sonrası hali: ",binary_128_bit)




xorludizi=[]

def xorlama(dizi,xorludizi):
    
    for i in range(128):
        if i==0:
            xorludizi.insert(0,dizi[0])
        else :
            yeni= dizi[i]^dizi[i-1]
            xorludizi.insert(i,yeni)
            
    print(xorludizi)



# 8 4 3 1 2 9 3 4 3 2 E C 27198072493522ED3609
