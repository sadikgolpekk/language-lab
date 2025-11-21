ORG 100h

LEA BX, sayilar    ; BX = sayilar dizisinin adresi

MOV AL, 2          ; AL = 2 → dizideki 3. eleman (0,1,2)

XLATB              ; AL = [BX + AL] yani sayilar[2]

RET

sayilar db 5h,6h,7h,8h
