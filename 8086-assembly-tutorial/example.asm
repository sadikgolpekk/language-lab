org 100h

sayi1 db 12  ; 1 byte yer ayir ve icine 12 koy
Sayi2 dw 15h ; 2 byte yer ayir

sayilar2 db 3 dup(8) ; 3 tane 8 sakla 8,8,8
sayilar3 db 2 dup(1,2,3) ; 1,2,3 iki kez tekrar 1,2,3,1,2,3

sayilar4 db 1,2,4 dup(3),4 ; 1,2,3,3,3,3,4
                         

sayilar5 db 3 dup(?) ; bellekte 3 tane bos (tanimsiz) byte ayir ?, ?, ?

sayilar6 dw 13h,124Fh,0021h ; 3 word = 6 byte  13h | 124Fh | 0021h

metin db 'okul' ; 'o','k','u','l' ASCII  6Fh 6Bh 75h 6Ch

faiz equ 8  ; sabit (constant)  bellekte yer kaplamaz
            ; sadece derleme sirasinda 8 ile degistirilir

mov ax, faiz ; AX = 8 EQU sabitinin kullanim ornegi
         
         
         
mov ax, 4C00h ; program sonlandirma
int 21h