meyveler={"elma","armut","kiraz","elma"}
meyveler2={"elma","armut","kiraz","kavun"}

for x in meyveler:
    print(x)


sonuc="elma" in meyveler # True yada False

print(sonuc)

meyveler.add("karpuz")
print(meyveler)

meyveler.update(meyveler2)
print(meyveler)

meyveler.remove("elma")
print(meyveler)

meyveler.discard("armut")
print(meyveler)


sonuc=meyveler
print(sonuc)