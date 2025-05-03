# JAVA NEDİR ?
![developpement_java_maroc-1](https://github.com/user-attachments/assets/37ff3acf-d1af-4931-9c75-4559727505c6)

Java, popüler bir programlama dilidir ve geniş bir kullanım alanına sahiptir. Başlangıçta, Sun Microsystems tarafından geliştirilmiş olan bu dil, daha sonra Oracle tarafından satın alınmıştır. Java'nın en belirgin özelliklerinden biri, "Bir kez derle, her yerde çalıştır" (Compile once, run anywhere) ilkesini benimsemesidir. Bu özellik sayesinde Java programları farklı platformlarda tekrar derleme gerekmeksizin çalışabilir.

## JVM - Java Sanal Makinesi

Java uygulamaları, doğrudan donanım üzerinde çalışmaz. Bunun yerine, derlenmiş Java kodu (bytecode) JVM (Java Virtual Machine) üzerinde çalıştırılır. Bu yapı, platform bağımsızlığını mümkün kılar ve Java'nın esnekliğini artırır.

## Java Programlarının İki Türü

![javaFeature_img](https://github.com/user-attachments/assets/a72843e7-e12f-4e59-9db4-b892fcd88a0e)

### Uygulamalar (Applications)

- Normal programlardır.
- Bilgisayarınızda çalıştırılmak üzere tasarlanmıştır.

### Appletler (Applets)

- Küçük uygulamalardır.
- İnternette başka bir konuma gönderilmek ve orada çalıştırılmak üzere tasarlanmıştır.

## Programlama ve Kullanıcı Kavramları

- Bir programı yazan kişiye **programcı** (programmer) denir.
- Programla etkileşime giren kişiye ise **kullanıcı** (user) denir.

![java1](https://github.com/user-attachments/assets/20337b96-bc52-467a-a679-05858c62dbc5)

## Paketler (Packages)

- **Paket** (package), önceden tanımlanmış sınıflardan oluşan bir kütüphanedir.
- Örneğin, tüm yardımcı sınıfları içeren `java.util` paketini kullanmak için şu şekilde ekleme yapılır:
  ```java
  import java.util.*;
  ```


## Temel Programlama Kavramları

- Parantez içindeki öğelere **argüman** (argument) denir ve bu öğeler, yöntemlerin ihtiyaç duyduğu bilgileri sağlar.
- **Değişken** (variable), veri depolayabilen bir yapıdır.
- Bilgisayara verilen bir talimat **ifadeye** (statement) denir; bu talimat noktalı virgül (`;`) ile sonlanır.
- Bir programlama dilinin dilbilgisi kuralları, o dilin **sözdizimi** (syntax) olarak adlandırılır.

## Ekrana Çıktı Alma

- `System.out.println` ifadesi, parantez içindeki bilgiyi ekrana yazdırır ve ardından bir alt satıra geçer.
  ```java
  System.out.println("Ne yazmak istiyorsanız buraya yazın");
  ```
- `System.out` bir nesnedir ve ekrana çıktı göndermek için kullanılır.
- `println` ise bir yöntemdir ve parantez içindeki ifadeyi ekrana yazdırır.

### `System.out.print` Kullanımı

- `System.out.print`, `println` gibi çalışır ancak bir alt satıra geçmez.

### Örnek

```java
int var = 3;
System.out.println(var + " kez A");
```

## Kullanıcıdan Veri Alma

- Bazen bir hesaplama için gereken veri, çalışma zamanında kullanıcıdan alınır.
- Klavyeden giriş almak için dosyanın başına şu satır eklenmelidir:
  ```java
  import java.util.*;
  ```
- Klavyeden veri girişi yapmak için `Scanner` sınıfı kullanılır:
  ```java
  Scanner keyboard = new Scanner(System.in);
  ```
  Örnek kullanım:
  ```java
  int eggsPerBasket = keyboard.nextInt();
  double d1 = keyboard.nextDouble();
  ```
  Bu kod, klavyeden bir tam sayı alır ve `eggsPerBasket` değişkenine atar.

## Java Programının Yapısı

- Bir Java programı, bir veya daha fazla sınıftan oluşur.
- Program çalıştırılmadan önce tüm sınıfların derlenmesi gerekir.
- Ancak, Java ile birlikte gelen sınıflar (örneğin `System` ve `Scanner`) için derleme gerekmez.

### `main` Metodu

- Çalıştırılacak sınıf, dosyanın başında şu ifadeyi içermelidir:
  ```java
  public static void main(String[] args)
  ```

### Dosya Adlandırma Kuralları

- Her sınıf ayrı bir dosyada olmalıdır.
- Dosya adı, sınıf adıyla aynı olmalıdır.

## Derleme ve Çalıştırma Komutları

![Java-Interpreter-Step-by-Step1](https://github.com/user-attachments/assets/204d61e1-354c-4778-8b0f-38d5f4973e3e)

- Bir Java programı derlendiğinde, programın byte-code sürümü `.java` uzantısından `.class` uzantısına dönüştürülür.
  ```
  [project_path]>javac Lab_1/HelloWorld.java
  ```
  Bu işlem `HelloWorld.class` dosyasını oluşturur. Bu dosya bytecode ya da hedef sınıf (target class) olarak adlandırılır.

- Bytecode çalıştırma:
  ```
  [project_path]>java Lab_1/HelloWorld Ahmet
  ```
  Çıktı:
  ```
  Hello World!
  Ahmet
  ```

- Argümanlarla çalışma:
  ```java
  [project_path]>java Lab_1/HelloWorld Ahmet Sayar
  ```
  Çıktı: ???
  `System.out.println(args[2])` çıktısı ne olur?

## Önemli Kavramlar ve Sorular

- **JVM (Java Virtual Machine)** nedir?
  JVM, Java programlarını çalıştıran sanal bir makinedir. Bytecode'u yorumlar ve çalıştırır. Platform bağımsızlığı sağlayan en önemli bileşendir.

- **Bytecode**, **kaynak kod** (source code) ve **hedef kod** (target code) nedir?
  - Kaynak kod (source code): Programcının yazdığı insan tarafından okunabilir koddur. Örneğin: `.java` dosyaları.
  - Bytecode: Derleyici tarafından üretilen ve JVM'in çalıştırabileceği ara koddur. Örneğin: `.class` dosyaları.
  - Hedef kod (target code): Programın, belirli bir platform için makine diline çevrilmiş halidir.

- Java taşınabilir midir? Nasıl?
  Evet, Java taşınabilirdir. Bytecode, herhangi bir platformda çalışan JVM üzerinde çalıştırılabilir.

- **Java SDK** nedir?
  Java SDK (Software Development Kit), Java uygulamaları geliştirmek için gerekli araçları içerir. Derleyici, JVM ve kitaplıklar gibi bileşenler içerir.

- **Java JRE** nedir?
  Java JRE (Java Runtime Environment), Java programlarını çalıştırmak için gerekli olan ortamdır. JVM ve temel sınıf kütüphanelerini içerir.

- Genel olarak:
  - **Linking** nedir?
    Programın farklı modüllerinin bir araya getirilip çalıştırılabilir bir hale getirilmesidir.
  - **Loading** nedir?
    Programın çalıştırılmadan önce belleğe yüklenme işlemidir.
  - **Derleme (compiling)** nedir?
    Kaynak kodun makine diline veya bytecode'a çevrilmesi işlemidir.
  - **Yorumlama (interpreting)** nedir?
    Programın kaynak kodunun satır satır çalıştırılmasıdır.

- Java derleyici tabanlı mı, yorumlayıcı tabanlı mı? Nasıl?
  Java, hem derleyici hem de yorumlayıcı tabanlıdır. Kaynak kod önce derlenir (bytecode'a çevrilir), ardından JVM bu bytecode'u yorumlayarak çalıştırır.

- Kaynak kodun uzantısı nedir?
  `.java`

- Bytecode (hedef kod) uzantısı nedir?
  `.class`

- Bir Java sınıfını derlemek için komut nedir?
  ```
  javac ClassName.java
  ```

- Bir Java sınıfını çalıştırmak için komut nedir?
  ```
  java ClassName
  ```

- Java her platformda çalışabilir mi?
  Evet, JVM'in bulunduğu her platformda çalışabilir.

- HTML içine gömülü ve web ortamında çalışan küçük Java kodlarına ne ad verilir?
  Applet.

- **Kapsülleme (encapsulation)** nedir?
  Verilerin ve bu verilere erişim yöntemlerinin bir sınıf içerisinde saklanması ve dış dünyadan gizlenmesidir. Bu sayede, veri güvenliği ve program modülerliği sağlanır.


# Java Kimlik Kuralları (Identifiers)

![variables](https://github.com/user-attachments/assets/a56d5dc8-e7e0-4260-b5cf-56bbb3762c25)

## Kimlikler (Identifiers)

Java'da **kimlikler** (identifiers), değişkenlerin, metodların veya sınıfların isimleridir. Bir kimlik, yalnızca harfler, rakamlar, alt çizgi karakteri (_) ve dolar işareti ($) içerebilir. Ayrıca, bir kimlik **rakamla** başlayamaz. Türkçe karakterler de kullanılabilir.

### Geçerli Kimlik Kuralları:
- **Harfler** (büyük ve küçük harfler) içerebilir.
- **Sayılardan** başlamamalıdır (ilk karakter sayı olamaz).
- **Sayılardan** (0-9), **harflerden**, **alt çizgi (_) karakteri** ve bazı **para birimi sembollerinden** (dolar $, sterlin £, euro €) kullanılabilir.
- **Boşluk**, **nokta (.)**, **yıldız (*)**, **@** gibi özel karakterler içeremez.
- **Türkçe karakterler** kullanılabilir.

### Geçerli Kimlikler:
Aşağıdaki değişken isimleri **geçerli** kimliklerdir çünkü Java'nın kurallarına uyar:

- `int test1;`  *(Geçerli: Sayılar içerebilir, ancak ilk karakter rakam olmamalıdır.)*
- `int test23we;` *(Geçerli: Sayı ve harf karışımı olmasına rağmen, ilk karakter rakam değildir.)*
- `int df_;` *(Geçerli: Alt çizgi (_) kullanılabilir.)*
- `int sd$;` *(Geçerli: Dolar işareti ($) kullanılabilir.)*
- `int şşt;` *(Geçerli: Türkçe karakterler kullanılabilir.)*

### Geçersiz Kimlikler:
Aşağıdaki değişken isimleri **geçersiz** kimliklerdir çünkü Java'nın kurallarına aykırıdır:

- `int k!34;`  *(Geçersiz: İçinde `!` karakteri bulunuyor.)*
- `int 2dfg;`  *(Geçersiz: İlk karakter rakamla başlıyor.)*
- `int @kl;`   *(Geçersiz: İçinde `@` sembolü bulunuyor.)*
- `int k.t;`   *(Geçersiz: İçinde nokta (.) karakteri bulunuyor.)*
- `int k-t;`   *(Geçersiz: İçinde tire (-) karakteri bulunuyor.)*
- `int a ei;`  *(Geçersiz: İçinde boşluk bulunuyor.)*

### Notlar:
- Kimlikler **istediğiniz kadar uzun** olabilir.
- Java, **büyük/küçük harf duyarlıdır**, yani `stuff`, `Stuff` ve `STUFF` üç farklı kimliktir.
- **Anahtar Kelimeler** (örneğin, `int`, `public`, `class`, `if`) özel anlamlara sahip olduğundan, kimlik olarak kullanılamazlar.

## Sonuç:
Java'da bir kimlik belirlerken, yukarıdaki kurallara uymanız gerekmektedir. Kimlikler sadece harfler, sayılar, alt çizgi (_) ve para birimi sembollerini içerebilir. İlk karakterin bir rakam olmaması gerektiğini unutmayın. Ayrıca, özel semboller ve boşluk gibi karakterler geçerli kimlik isimlerinde bulunmamalıdır.


# Java'da Dizi Tanımlama

Java'da diziler, aynı türdeki öğeleri saklayan veri yapılarına verilen isimdir. Diziler sabit boyutlu olup, her elemanın türü aynı olmalıdır.

## Dizi Tanımlama

![maxresdefault](https://github.com/user-attachments/assets/6f1109a8-269e-47ad-a3db-b650d7cc803d)

Bir dizi tanımlamak için şu sözdizimi kullanılır:

```java
<veri_türü>[] <dizi_adı>;

int[] numbers = new int[5];
String[] names = new String[3];
```

# Java'da Düzensiz Diziler (Ragged Arrays)

Java'da iki boyutlu diziler, dizilerin dizisi olarak tanımlanır. Bu dizilerde her satır farklı sayıda elemana sahip olabilir. Böyle dizilere **düzensiz diziler** (ragged arrays) denir.

## Düzensiz Dizi (Ragged Array)

Bir düzenli iki boyutlu dizide her satır aynı sayıda elemana sahipken, düzensiz dizilerde her satır farklı sayıda elemana sahip olabilir.

### Örnek

```java
int[][] raggedArray = new int[3][];
raggedArray[0] = new int[2]; // İlk satırda 2 eleman
raggedArray[1] = new int[3]; // İkinci satırda 3 eleman
raggedArray[2] = new int[1]; // Üçüncü satırda 1 eleman
```

# Java'da ArrayList ve Vector Kullanımı

**ArrayList** ve **Vector**, Java'da dinamik veri yapıları olarak kullanılan koleksiyon sınıflarıdır. Her ikisi de öğe eklemek, çıkarmak ve üzerinde işlem yapmak için kullanılır. Ancak bazı önemli farklar vardır.

## ArrayList ve Vector Arasındaki Farklar

### 1. **Senkronizasyon**
   - **Vector**: Senkronized bir koleksiyon olup, çok iş parçacıklı ortamlar için güvenlidir ancak performans kaybına yol açabilir.
   - **ArrayList**: Senkronize edilmemiştir, bu yüzden performansı daha yüksektir ancak çok iş parçacıklı ortamlarda güvenlik garantisi yoktur.

### 2. **Büyüme Stratejisi**
   - **Vector**: Kapasite, her ekleme işlemi sonrası iki katına çıkar.
   - **ArrayList**: Kapasite genellikle %50 oranında artar.

### 3. **Performans**
   - **Vector**: Daha düşük performans, çünkü senkronize edilmiştir.
   - **ArrayList**: Daha hızlıdır çünkü senkronize edilmez.

### 4. **Veri Türleri**
   - **ArrayList** ve **Vector** sadece nesneleri tutar, ilkel türler **Integer**, **Boolean** gibi nesnelere dönüştürülmelidir.

## Kullanım

### **ArrayList Kullanımı**

Bir **ArrayList** ve **Vector** tanımlamak ve kullanmak için şu sözdizimini kullanabilirsiniz:

```java
ArrayList<String> list = new ArrayList<>();  // ArrayList oluşturma
list.add("A");  // Eleman ekleme
list.add("B");

System.out.println(list.get(0));  // Eleman erişimi: "A"


Vector<String> vector = new Vector<>();  // Vector oluşturma
vector.add("X");  // Eleman ekleme
vector.add("Y");

System.out.println(vector.get(0));  // Eleman erişimi: "X"

```

# Java'da Constructor Kullanımı

**Constructor** (Yapıcı), bir sınıfın örneği (instance) oluşturulduğunda çağrılan özel bir yöntemdir. Constructor, sınıfın alanlarını (fields) başlatmak ve sınıfın örneğini doğru şekilde kurmak için kullanılır. Java'da **constructor** sınıfın temel bileşenlerinden biridir ve sınıfın doğru bir şekilde başlatılmasını sağlar.

## Constructor Nedir?
![Java_Constructors](https://github.com/user-attachments/assets/178d2f5b-ab2b-4ea6-9d47-a073516b85af)

- **Constructor** adı, sınıf adıyla aynı olmalıdır.
- Constructor'lar geri dönüş değeri içermez, yani bir değer döndürmezler.
- Constructor'lar genellikle sınıfın **alanlarını** (fields) başlatmak ve nesneyi başlatmak için kullanılır.
- Her sınıfın en az bir constructor'ı olmalıdır. Eğer sınıf içinde bir constructor tanımlanmazsa, Java otomatik olarak bir **varsayılan (default)** constructor sağlar.
- Bir sınıfın birden fazla constructor'ı olabilir. Bu, **constructor overloading** (constructor aşırı yüklemesi) olarak adlandırılır ve nesne oluşturulurken farklı parametrelerle başlatma yapabilmeyi sağlar.

## Constructor Türleri

### 1. **Varsayılan Constructor (Default Constructor)**

Eğer sınıf içinde hiç constructor tanımlanmazsa, Java otomatik olarak bir **varsayılan constructor** sağlar. Bu constructor, sınıfın tüm alanlarını varsayılan değerlere atar:
  - **Sayısal türler** (örneğin `int`, `double`) için `0`
  - **Nesne referansları** (örneğin `String`, `Object`) için `null`
  - **Booleans** için `false`

Varsayılan constructor, genellikle sınıfın alanlarını başlatmak için kullanılır. Eğer bir parametreli constructor yazmazsanız, Java'nın otomatik sağladığı constructor kullanılacaktır.

#### Örnek: Varsayılan Constructor Kullanımı

```java
public class Car {
    String model;
    int year;

    // Varsayılan constructor
    public Car() {
        model = "Unknown";  // Sınıfın alanlarını varsayılan değerlere ayarladık
        year = 0;
    }

    public void displayInfo() {
        System.out.println("Model: " + model + ", Year: " + year);
    }
}

public class Main {
    public static void main(String[] args) {
        Car car1 = new Car();  // Varsayılan constructor çağrılır
        car1.displayInfo();     // Çıktı: Model: Unknown, Year: 0
    }
}

```



### 2. Parametreli Constructor 

Aşağıda bir sınıfın constructor kullanımı gösterilmektedir:

```java
public class Person {
    String name;
    int age;

    // Parametresiz constructor
    public Person() {
        name = "Unknown";
        age = 0;
    }

    // Parametreli constructor
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
}

public class Main {
    public static void main(String[] args) {
        // Parametresiz constructor ile nesne oluşturma
        Person person1 = new Person();

        // Parametreli constructor ile nesne oluşturma
        Person person2 = new Person("Alice", 25);

        System.out.println(person1.name + " - " + person1.age); // Çıktı: Unknown - 0
        System.out.println(person2.name + " - " + person2.age); // Çıktı: Alice - 25
    }
}
