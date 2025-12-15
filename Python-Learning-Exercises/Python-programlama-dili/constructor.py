class Product:
    # method
    # attribute,property
    def __init__(self,name,price,isActive):
        self.name=name
        self.price=price
        self.isActive=isActive

    # instance method
    def intro(self):
        return f"ürün adı:{self.name} ürün fiyat{urun.price}"
    
    def kdv_price(self):
        return self.price*1.2

# Instance,Object

p1=Product("IPhane 15",50000,True)
p2=Product("IPhane 15 Pro",60000,True)
p3=Product("Samsung S24",70000,False)

urunler=[p1,p2,p3]

for urun in urunler:
    if urun.isActive:
        print(urun.intro())
        print(urun.kdv_price())
