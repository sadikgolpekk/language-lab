# Dictionary Metodları

yemekTarifi={
   "yemekAdi":"Musakka",
   "yemekTarifi":"tarif açıklaması",
   "resim":"1.jpg"
}

# access items

sonuc=yemekTarifi["yemekAdi"]
print(sonuc)

sonuc=yemekTarifi.get("yemekAdi") # köşeli parantez yerine
print(sonuc)

sonuc=yemekTarifi.keys() # keyler
print(sonuc)

sonuc=yemekTarifi.values() # sonuclar
print(sonuc)


# update items

yemekTarifi["yemekAdi"]="Mantı"
sonuc=yemekTarifi

print(sonuc)

yemekTarifi.update({"yemekAdi":"Musakka"})

print(sonuc)



# delete items

yemekTarifi.pop("yemekAdi")

sonuc=yemekTarifi
print(sonuc)


yemekTarifi.popitem() # sonuncusunu siler

sonuc=yemekTarifi
print(sonuc)