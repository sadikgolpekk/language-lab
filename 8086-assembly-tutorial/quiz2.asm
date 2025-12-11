 ;36.grup
 ; Hilmi Aziz Ozturk 230201154
 ; Sadik Golpek 230201040

org 100h

start:
   
    lea dx, anahtar_giris
    mov ah, 09h
    int 21h
    
    mov cx, 8       
    mov bl, 0       

dongu:
    mov ah, 01h    
    int 21h
    
    sub al, 30h     ; sayisal degere cevir
    
    shl bl, 1       ; MSB
    or bl, al       ; LSB
    
    loop dongu
    
    mov key, bl   

    
    lea dx, sifrelenecek_karakter
    mov ah, 09h
    int 21h
    
    mov ah, 01h     
    int 21h
    sub al, 30h     ;cevirmek icin
    mov ah, 0
    mov karakter_sayisi, ax 
    
    ; xor
    lea dx, metingiris
    mov ah, 09h
    int 21h
    
    mov cx, karakter_sayisi ; dongu
    mov si, 0         ; araci eleman
    mov bl, key       

ikincidongu:
    mov ah, 01h     ; AH okuma icin
    int 21h
    
    xor al, bl      ; her biri xor
    
    mov buffer[si], al ; buffer atimi
    inc si
    loop ikincidongu

    ; Dosya olusturma icin
    
    mov ah, 3Ch
    mov cx, 0       
    lea dx, dosya_adi
    int 21h
    
    mov fileHandle, ax 
    
    mov ah, 40h
    mov bx, fileHandle 
    mov cx, karakter_sayisi 
    lea dx, buffer     
    int 21h 
    
    mov ah, 3Eh
    mov bx, fileHandle
    int 21h
    
    mov ah, 09h
    int 21h
    

ret

   dosya_adi db 'ciphertext.txt', 0  
   fileHandle dw ?   

    anahtar_giris db '8-bit anahtari giriniz$'
    sifrelenecek_karakter db 0Dh, 0Ah, 'Sifrelenecek karakter sayisi: $'
    metingiris db 0Dh, 0Ah, 'Metni giriniz: $' 
      
    key db 0           
    karakter_sayisi dw 0     
    buffer db 100 dup(?) 
