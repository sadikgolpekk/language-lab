org 100h
 ; MOV ve LEA kullanimi
 LEA BX, sayilar ;sayilar dizisinin baslangic adresini BX e attik
 MOV AL, [BX] ; BX in gosterdigi yerdeki degeri AL ye atadik yani dizinin ilk  elemani
 ret
 sayilar db 5h,6h,7h,8h
 end
