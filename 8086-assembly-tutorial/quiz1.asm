; Pek başarılı olmayan yapamadığımız ilk labaratuvar quizi, com template kullanılarak yazılmıştır.
org 100h  


Mov dh,6
Mov dl, 20 
mov ah, 2
int 10h 

mov dx, offset buffer
		mov ah, 0ah
		int 21h
		jmp print
		buffer db 5,?, 5 dup(' ') 

Mov bl,5
lea si, buffer 
lea di, kalanlar
mov cx, 4

repeat:
Mov ax, [si] 
Mov bl, 5
DIV bl 
mov [di], ah
inc si 
inc di
loop repeat
                
print:
		xor bx, bx
		mov bl, buffer[1]
		mov buffer[bx+2], '$'
		mov dx, offset buffer + 2
		mov ah, 9
		int 21h               
		
		

ret

  
  kalanlar db 4 dup(?)
  filename db "quiz1.txt",0


