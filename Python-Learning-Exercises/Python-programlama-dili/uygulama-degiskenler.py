musteriAd="Sadık"
musteriSoyad="Gölpek"
musteriEmail="sadik123@gmail.com"


urun1Ad="Kablosuz Mouse"
kablosuzMouse=550

urun2Ad="Kablosuz Klavye"
kablosuzKlavye=650

urun3Ad="Kablosuz Diz Üstü"
kablosuzDizUstu=55000

kdvOrani=0.18

toplamUcret=kablosuzDizUstu+kablosuzKlavye+kablosuzMouse

print("toplam ödenen ücret: ",toplamUcret)

kdvUcret=toplamUcret*kdvOrani

print("kdv ücreti: "+str(kdvUcret))

print("kdv'siz ",(toplamUcret-kdvUcret))


