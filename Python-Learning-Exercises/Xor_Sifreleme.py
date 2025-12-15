a=12 # binary 1100
b=5 # binary 0101

print(f"a sayisi (Binary):{bin(a)}")
print(f"b sayisi (Binary):{bin(b)}")
print("-"*20)

# XOR islemi(^)

# 1100
# 0101
# ----
# 1001 (sonuc 9)

xor_sonuc=a^b
print(f"XOR Sonucumuz(Decimal sistem):{xor_sonuc}")
print(f"XOR Sonucumuz(Binary sistem):{bin(xor_sonuc)}")
print("-"*20)




# AND islemi(&)

# 1100
# 0101
# ----
# 0100 (sonuc 4)

and_sonuc=a&b
print(f"and sonucumuz(decimal):{and_sonuc}")
print(f"and sonucumuz(binary):{bin(and_sonuc)}")
print("-"*20)



# SHIFT islemi(<< >>)
# a=1100(12)
# 2 birim sola kaydir:110000(48 oldu)
shift_sol=a<<2
print(f"Sola shift(2 birim): {shift_sol}-->{bin(shift_sol)}")



# a=1100(12)
# 2 birim sağa kaydir:0011(3 oldu)
shift_sag=a>>2
print(f"Saga shift(2 birim): {shift_sag}-->{bin(shift_sag)}")


def sifrele_coz(metin,anahtar):
    sonuc=""
    print(f"anahtarımız:{anahtar}")

    for harf in metin:
        # harfi sayisal al
        sayisal_harf=ord(harf)
        
        # xor islemi
        yeni_sayi=sayisal_harf^anahtar
        
        # geri harfe cevir
        yeni_harf=chr(yeni_sayi)

        # detay
        print(f"harf:'{harf}' ({sayisal_harf})^{anahtar} -->{yeni_sayi} ('{yeni_harf}')")
        sonuc+=yeni_harf

    return sonuc

# şifreleme örneği

mesaj=input("lütfen şifrelenecek mesajı giriniz: ")

# anahtar alacağız

gizli_anahtar=int(input("lütfen anahtarı giriniz: "))
print("-"*40)

print(f"orijinal mesaj {mesaj}")

# --- ŞİFRELEME ---
sifreli_metin = sifrele_coz(mesaj, gizli_anahtar)
print(f"ŞİFRELİ HALİ : {sifreli_metin}")


# sifreleme coz
cozulmus_metin=sifrele_coz(sifreli_metin,gizli_anahtar)
print(f"cozulmus hali {cozulmus_metin}")
