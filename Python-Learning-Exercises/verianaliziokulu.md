```python
# bir sayı dizisindeki çift ve tek sayıların sayısını hesaplayan kod
```


```python
ornek_liste=[3,5,2,4,6,8,9,10,11,12]
cift=0
tek=0
for a in ornek_liste:
    if a%2==0:
        cift=cift+1
    else:
        tek=tek+1

print(f"Cift sayilarımız: {cift},tek sayilarımız: {tek}")
```

    Cift sayilarımız: 6,tek sayilarımız: 4
    


```python
# fibonacci dizisi
# 0 ile 50 arasındai fibonacci dizisini bulan python programi
fib=[0,1]

for i in range(50):
    yeni_eleman=fib[-1]+fib[-2]

    if yeni_eleman>50:
        break
    fib.append(yeni_eleman)

print(fib)
    
```

    [0, 1, 1, 2, 3, 5, 8, 13, 21, 34]
    


```python
# toplama
x=[1,3,15,17,8,5]
sum=0
for a in x:
    sum=sum+a
print(sum)

# en büyük

enbuyuk=x[0]

for a in x:
    if a>enbuyuk:
        enbuyuk=a
print(enbuyuk)

# en küçük
enkucuk=x[0]

for a in x:
    if a<enkucuk:
        enkucuk=a
print(enkucuk)

print(max(x))
print(min(x))

```

    49
    17
    1
    17
    1
    


```python

```
