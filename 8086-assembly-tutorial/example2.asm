 org 100h
 ; MOV ve LEA kullanimi
 LEA BX, sayi
 ; sayi degiskeninin tutuldugu bellek adresi BX registerina atandi
 MOV AX, [BX] ; BX registerinin gosterdigi bellek hucresindeki degeri AX  registerina atadik
 MOV BP, offset sayi ; BP registerina sayi degiskeninin bellek adresini atadik
 ret
 sayi dw 0BCDEh
 end
