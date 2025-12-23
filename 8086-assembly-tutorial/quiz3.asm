; exe template

data segment
    ; add your data here!
    pkey db "press any key...$"
ends

stack segment
    dw   128  dup(0)
ends

code segment
start:
; set segment registers:
    mov ax, data
    mov ds, ax
    mov es, ax

   
	;input
	mov cx,3
	mov si,0
	
	inputal:
	mov ah, 1
	int 21h
	
	mov array+si,al
	inc si
	loop inputal
	
	CMP array[0],'k'
	
	 
	
	mov bl,array[1]
	sub bl,'0' 
	mov cl,bl
	mov dh, 10
	mov dl, 20
	mov bh, 0
	mov ah, 2
	
	int 10h
	kareloop:
	
	mov al, array[2]
	mov ah, 0eh
	int 10h
	loop kareloop
	
    
    ; wait for any key....    
    mov ah, 1
    int 21h
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    

ends

msg db 5 dup(?)
array db  3 dup(?)
end start ; set entry point and stop the assembler.


