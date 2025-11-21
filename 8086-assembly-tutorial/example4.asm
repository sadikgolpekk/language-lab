org 100h

MOV BX, 0000h          ; BX dizideki offset (başlangıç = 0)

MOV CX, sayi[BX]       ; sayi[0] → ilk WORD → 1234h CX'e taşınır
                       ; çünkü DW = 2 byte → bellekte: 34h,12h

MOV CX, sayi[BX+2]     ; sayi[2] → ikinci WORD → 5678h CX'e taşınır
                       ; +2 dememizin sebebi WORD = 2 byte olmasıdır

ret                    ; programı bitir (EMU8086 bunu tolere eder)

sayi dw 1234h, 5678h   ; 16 bitlik dizi: 1234h, 5678h
                       ; bellekte: 34h 12h 78h 56h (little endian)
end
