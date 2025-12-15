# w (Write) yazma modu
# dosyayı ilgili konumda oluşturur
# eğer konumda aynı dosya varsa dosyayı siler ve yeni oluşturur.

file=open("dosya.txt","w",encoding="utf-8")
file.write("Çınar Turan\n")

file.close()
