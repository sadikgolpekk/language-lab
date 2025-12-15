# open(dosya adi,dosya_erişim_modu)
# dosya_erişim_modu --> dosyayı hangi amaçla açtığımızı belirtir.

# r:read(okuma) modudur.Dosya konumda yoksa hata verir.
# w:write(yazma) modudur.
# dosyayı konumda oluşturur.
# dosya içeriğini siler ve yeniden ekleme yapar.
# a:(Append) ekleme,dosya konumda yoksa oluşturur.
# r+ : Hem okuma hem yazma modunda açılır.Dosya konumda yoksa hata verir.

with open("dosya2.txt","a",encoding="utf-8") as file:
    file.seek(0)
    file.write("ikinci satır\n")