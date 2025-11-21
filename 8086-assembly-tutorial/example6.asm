org 100h

mov AH, 5     ; AH = 5
inc AH        ; AH = 6

mov AL, 5     ; AL = 5
dec AL        ; AL = 4

mov ax, 4C00h
int 21h
end
