# 8086 Assembly Tutorial (emu8086)

Bu depo, **Mikroişlemci Sistemleri** dersi kapsamında hazırlanmış **Intel 8086 Assembly** örneklerini ve quiz çalışmalarını içermektedir.  
Amaç, **temel assembly programlama mantığını**, **8086 mimarisini** ve **emu8086 emülatörü** kullanarak uygulamalı şekilde öğrenmektir.

---

<img width="292" height="284" alt="image" src="https://github.com/user-attachments/assets/cf73494d-4848-47e7-82b5-d70f2fa2f139" />


## 🧠 Intel 8086 Hakkında

**Intel 8086**, x86 mimarisinin temelini oluşturan **16-bit** bir mikroişlemcidir.

Temel özellikleri:
- 16-bit işlemci
- 20-bit adres yolu (1 MB adreslenebilir bellek)
- Segment:Offset adresleme yapısı
- Genel amaçlı registerlar: `AX`, `BX`, `CX`, `DX`
- Segment registerları: `CS`, `DS`, `SS`, `ES`

Bu mimari, günümüz modern işlemcilerinin temelini oluşturduğu için **öğretici ve kritiktir**.

---

<img width="1671" height="791" alt="image" src="https://github.com/user-attachments/assets/8e7ac3a2-4cb0-486f-af63-a109ce3e7dc4" />


## ⚙️ Assembly Dili Nedir?

Assembly, donanıma en yakın **düşük seviyeli** programlama dilidir.

Avantajları:
- Donanımın nasıl çalıştığını doğrudan öğretir
- Register, bellek ve stack mantığını kavratır
- Mikroişlemci mimarisini anlamayı sağlar

Dezavantajları:
- Yazımı zordur
- Platforma bağımlıdır
- Yüksek seviyeli dillere göre daha karmaşıktır


---

## 🧪 emu8086 Emülatörü

Bu projede **emu8086** emülatörü kullanılmıştır.

emu8086:
- Intel 8086 işlemcisini simüle eder
- Registerları, belleği ve stack’i görsel olarak izleme imkanı sunar
- Eğitim amaçlı en yaygın 8086 emülatörlerinden biridir

Assembly öğrenirken **adım adım çalıştırma (step-by-step)** ve register takibi büyük avantaj sağlar.

---

## 📄 `.COM` ve `.EXE` Program Yapıları

### `.COM` Programları
- Tek segmentlidir
- Maksimum 64 KB
- Program `ORG 100h` ile başlar
- Basit ve eğitim amaçlı kullanımlar için idealdir

Örnek başlangıç:
```asm
ORG 100h
MOV AX, BX
RET
 ```
### `.EXE` Programları
- Çok segmentlidir
- Kod, veri ve stack segmentleri ayrıdır
- Daha karmaşık ama gerçekçi program yapısına sahiptir

Örnek başlangıç:
```
  .MODEL SMALL
.STACK 100h
.DATA
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    ; program kodları
    MOV AH, 4Ch
    INT 21h
MAIN ENDP
END MAIN
```


