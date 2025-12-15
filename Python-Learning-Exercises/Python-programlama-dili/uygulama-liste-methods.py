customers=["sadikturan","ahmetyilmaz","cinarturan","yiğitbilgi"]
order_totals=[12000,13000,5000,15000]

# sadikturan kullanıcı adı ile  yapılan 5000 liralık siptarişi listeye ekleyiniz.
customers.append("sadikturan")
order_totals.append(5000)

sonuc=customers
print(sonuc)


sonuc=order_totals
print(sonuc)

# son eklenen siparişi siliniz

customers.pop()
sonuc=customers

print(sonuc)


order_totals.pop()
sonuc=order_totals

print(sonuc)

# tüm müşteriler için aşağıdaki özet cümleyi yazdırınız 
 # '<username>' isimli müşterinin sipariş toplamı '<10000>' liradır.

sonuc=f"{customers[0]} isimli müşterinin sipariş toplamı {order_totals[0]} liradır."
print(sonuc)

 # müşterileri alfabetik olarak sıralayınız

customers.sort()
print(customers)


 # sipariş toplamlarını azala şekilde sıralayınız.

order_totals.sort()
order_totals.reverse()

print(order_totals)

 # en düşük sipariş hangisidir

sonuc=min(order_totals)
print(sonuc)

 # sadikturan isimli kullanıcının kaç siparişi vardır
sonuc=customers.count('sadikturan')
print(sonuc)
 # customers listesinden ahmetyilmaz isimli kullanıcıyı sliiniz
customers.remove('ahmetyilmaz')
sonuc=customers
print(sonuc)

 # listelerdeki tüm içerikleri siliniz
customers.clear()
order_totals.clear()

sonuc=customers
print(sonuc)

sonuc=order_totals
print(sonuc)

 # kullanıcıdan aldığınız kullanıcı adı ve sipariş toplamlarını listeye ekleyiniz.


username=input('müşteri adı: ')
toplam=input('toplam: ')

customers.append(username)
order_totals.append(toplam)

print(customers)
print(order_totals)