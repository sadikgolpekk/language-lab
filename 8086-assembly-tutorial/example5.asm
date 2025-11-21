org 100h
; XCHG kullanimi

MOV BL, 2h
MOV BH, 3h

; BL ile BH’i yer degistirmek istersek
XCHG BL, BH

ret

sayılar db 5h,6h,7h,8h
end
