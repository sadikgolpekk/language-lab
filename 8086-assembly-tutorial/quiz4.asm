; exe template
data segment
   boyut db 3 dup(?) 
   size dw ? 
   msg db "Matrisin Elemanlari:"  
   msgend:
   
   col db ?
   
ends

stack segment
    dw   128  dup(0)
ends

code segment 
    
start:

    mov ax, data
    mov ds, ax
    mov es, ax

    mov si, offset boyut
    mov ah, 1
	int 21h  
	sub al,'0'
	mov ds:si,al
	inc si
	mov ah, 1
	int 21h
	sub al,'0'
	mov ds:si,al
	inc si
	mov ah, 1
	int 21h        
    mov ds:si,al 
    
    lea si ,boyut
    
    mov al,[si]
    inc si
    
    mov bl,[si] 
    mul bl
    lea si,size
    mov ds:si,ax    
    ;
    
    mov dh, 1
	mov dl, 0
	mov bh, 0
	mov ah, 2
	int 10h
    
    ;
    mov cx,size
	label:
	mov ah, 1
	int 21h
	mov ah,0  
	push ax
	
	
	
	
	loop label
     
     
     
    mov al, 1
	mov bh, 0
	mov bl, 1111_0000b
	mov cx, msgend-offset msg
	mov dl, 30h
	mov dh, 06h
	push ds
	pop es
	mov bp, offset msg
	mov ah, 13h
	int 10h
	
	
	
	
	mov cx,size
	mov si,0
	
	mov dh, 07h
	mov dl, 30h
	mov bh, 0
	mov ah, 2
	int 10h
	rowl:
	mov di,cx
	inc si 
	pop dx
	push dx
	mov ah,2h 
    mov bh,0
    int 21h
    
    
    mov ax,0
    mov al,[boyut+1]
    cmp si,ax
    je newLine
     
    
    mov dl,[boyut+2]
    mov ah,2h 
    int 21h   
    pop ax
    mov cx,di
    loop rowl
    
    newLine: 
    
     
    
    mov ah,03h
    int 10h
    
    inc dh
	mov dl, 30h
	mov bh, 0
	mov ah, 2
	int 10h 
	mov si,0
	mov cx,di
	loop rowl
	
	
	
    
    mov ax, 4c00h 
    int 21h 
    
    ara:
    mov al,[boyut+2]
    yaz:
    pop bx
    pop ax
    push bx
    
    
    pop bx
    jmp bx   
ends

end start 
