# Java Polymorphism ve Inheritance Örneği

Bu proje, Java'nın nesne yönelimli programlama (OOP) özelliklerini kullanarak bir hayvan sınıfı hiyerarşisi oluşturur. Her hayvan türü (`Cat`, `Dog`, `Bird`) `Animal` sınıfından türetilmiştir ve her biri farklı davranışlar sergiler. Aşağıda, kodun çeşitli bölümlerini açıklayan detaylı bir rehber bulunmaktadır.

## İçindekiler
- [Proje Özeti](#proje-özeti)
- [Temel Kavramlar](#temel-kavramlar)
    - [`extends` Anahtar Kelimesi](#extends-anahtar-kelimesi)
    - [`super` Anahtar Kelimesi](#super-anahtar-kelimesi)
    - [`@Override` Anotasyonu](#override-anotasyonu)
    - [Sınıf Yapıcıları (Constructors)](#sınıf-yapıcıları-constructors)
    - [Polimorfizm](#polimorfizm)
    - [Instanceof Anahtar Kelimesi](#instanceof-anahtar-kelimesi)
- [Kod Yapısı](#kod-yapısı)
- [Örnek Çıktılar](#örnek-çıkıtalar)

## Proje Özeti

Bu proje, `Animal` adlı bir ana sınıf ve bu sınıftan türetilen üç farklı sınıf içerir: `Cat`, `Dog`, ve `Bird`. Bu sınıflar, `Animal` sınıfının özelliklerini (isim, yaş) ve davranışlarını (ses çıkarma, hareket etme) miras alır ve kendi özelliklerine uygun olarak bazı davranışları override eder (geçersiz kılar).

### Kodun Genel Yapısı

1. **`Animal` Sınıfı**: Bu sınıf, temel özellikleri ve davranışları (ses çıkarma ve hareket etme) içerir. Diğer sınıflar bu sınıfı genişletir.
2. **`Cat` Sınıfı**: `Animal` sınıfını genişleten bir alt sınıftır. Kediler için özel davranışlar (örneğin, oyuncakla oynama) ekler.
3. **`Dog` Sınıfı**: `Animal` sınıfını genişleten bir başka alt sınıftır. Köpekler için özel davranışlar (örneğin, top oynama) ekler.
4. **`Bird` Sınıfı**: `Animal` sınıfını genişleten bir diğer alt sınıftır. Kuşlar için uçma davranışı ekler.

## Temel Kavramlar

### `extends` Anahtar Kelimesi

`extends` anahtar kelimesi, bir sınıfın başka bir sınıfı miras almasını sağlar. Bu sayede, alt sınıf, üst sınıfın tüm özelliklerine ve metodlarına erişebilir. Örneğin:

```java
class Cat extends Animal {
    // Cat sınıfı, Animal sınıfından miras alır
}








