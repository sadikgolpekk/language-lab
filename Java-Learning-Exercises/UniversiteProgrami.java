/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.universiteprogrami;

// Kisi interface
interface Kisi {
    void bilgileriGoster();
}

// Abstract Ogrenci sınıfı
abstract class Ogrenci implements Kisi {
    private String isim;
    private int ogrenciNo;
    private String bolum;

    public Ogrenci(String isim, int ogrenciNo, String bolum) {
        this.isim = isim;
        this.ogrenciNo = ogrenciNo;
        this.bolum = bolum;
    }

    public String getIsim() {
        return isim;
    }

    public int getOgrenciNo() {
        return ogrenciNo;
    }

    public String getBolum() {
        return bolum;
    }

    public void bilgileriGoster() {
        System.out.println("Öğrenci Adı: " + isim);
        System.out.println("Öğrenci No: " + ogrenciNo);
        System.out.println("Bölüm: " + bolum);
    }

    public abstract void dersPrograminiGoster();
}

// Abstract Personel sınıfı
abstract class Personel implements Kisi {
    private String isim;
    private String departman;
    private double maas;

    public Personel(String isim, String departman, double maas) {
        this.isim = isim;
        this.departman = departman;
        this.maas = maas;
    }

    public String getIsim() {
        return isim;
    }

    public String getDepartman() {
        return departman;
    }

    public double getMaas() {
        return maas;
    }

    public void bilgileriGoster() {
        System.out.println("Personel Adı: " + isim);
        System.out.println("Departman: " + departman);
        System.out.println("Maaş: " + maas);
    }

    public abstract void gorevleriGoster();
}

// Ders sınıfı
class Ders {
    private String dersAdi;
    private String dersKodu;
    private int kredi;

    public Ders(String dersAdi, String dersKodu, int kredi) {
        this.dersAdi = dersAdi;
        this.dersKodu = dersKodu;
        this.kredi = kredi;
    }

    public void dersBilgileriGoster() {
        System.out.println("Ders Adı: " + dersAdi);
        System.out.println("Ders Kodu: " + dersKodu);
        System.out.println("Kredi: " + kredi);
    }
}

// Maas sınıfı
class Maas {
    private double maasMiktari;

    public Maas(double maasMiktari) {
        this.maasMiktari = maasMiktari;
    }

    public void maasBilgisiGoster() {
        System.out.println("Maaş Miktarı: " + maasMiktari);
    }
}

// Lisans sınıfı
class Lisans extends Ogrenci {
    public Lisans(String isim, int ogrenciNo, String bolum) {
        super(isim, ogrenciNo, bolum);
    }

    @Override
    public void dersPrograminiGoster() {
        System.out.println("Lisans ders programı gösteriliyor...");
    }
}

// LisansUstu abstract sınıfı
abstract class LisansUstu extends Ogrenci {
    public LisansUstu(String isim, int ogrenciNo, String bolum) {
        super(isim, ogrenciNo, bolum);
    }
}

// Master sınıfı
class Master extends LisansUstu {
    public Master(String isim, int ogrenciNo, String bolum) {
        super(isim, ogrenciNo, bolum);
    }

    @Override
    public void dersPrograminiGoster() {
        System.out.println("Master ders programı gösteriliyor...");
    }
}

// Doktora sınıfı
class Doktora extends LisansUstu {
    public Doktora(String isim, int ogrenciNo, String bolum) {
        super(isim, ogrenciNo, bolum);
    }

    @Override
    public void dersPrograminiGoster() {
        System.out.println("Doktora ders programı gösteriliyor...");
    }
}

// AkademikPersonel sınıfı
class AkademikPersonel extends Personel {
    public AkademikPersonel(String isim, String departman, double maas) {
        super(isim, departman, maas);
    }

    @Override
    public void gorevleriGoster() {
        System.out.println("Akademik personel görevleri gösteriliyor...");
    }
}

// IdariPersonel sınıfı
class IdariPersonel extends Personel {
    public IdariPersonel(String isim, String departman, double maas) {
        super(isim, departman, maas);
    }

    @Override
    public void gorevleriGoster() {
        System.out.println("İdari personel görevleri gösteriliyor...");
    }
}

// Ana sınıf (main)
public class UniversiteProgrami {
    public static void main(String[] args) {
        Lisans ogrenci1 = new Lisans("Ali Veli", 12345, "Bilgisayar Mühendisliği");
        ogrenci1.bilgileriGoster();
        ogrenci1.dersPrograminiGoster();

        AkademikPersonel akademikPersonel = new AkademikPersonel("Dr. Ahmet", "Bilgisayar Bilimleri", 15000);
        akademikPersonel.bilgileriGoster();
        akademikPersonel.gorevleriGoster();
    }
}
