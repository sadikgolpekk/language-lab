/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.classesandmethods;

/**
 *
 * @author sadik
 */
import java.util.ArrayList;
import java.util.List;

public class Ogrenci {
    private String ad; // Öğrenci adı
    private int sinif; // Öğrenci sınıfı (örnek: 10, 11, 12)
    private List<Ders> dersListesi; // Öğrencinin aldığı derslerin listesi
    private static int ogrenciSayisi = 0; // Toplam öğrenci sayısı (statik)

    // Default Constructor
    public Ogrenci() {
        this.ad = "Bilinmiyor";
        this.sinif = 0; // Varsayılan sınıf 0
        this.dersListesi = new ArrayList<>();
        ogrenciSayisi++;
    }
    
      public Ogrenci(String ad) {
        this.ad =ad;
        this.sinif = 0; // Varsayılan sınıf 0
        this.dersListesi = new ArrayList<>();
        ogrenciSayisi++;
    }


    // 2 parametreli Constructor
    public Ogrenci(String ad, int sinif) {
        this.ad = ad;
        this.sinif = sinif;
        this.dersListesi = new ArrayList<>();
        ogrenciSayisi++;
    }

    // 3 parametreli Constructor
    public Ogrenci(String ad, int sinif, List<Ders> dersListesi) {
        this.ad = ad;
        this.sinif = sinif;
        this.dersListesi = dersListesi;
        ogrenciSayisi++;
    }

    // Öğrenci bilgilerini yazdırma
    public void OgrenciBilgisiYaz() {
        System.out.println("Ad: " + ad);
        System.out.println("Sinif: " + sinif);
        System.out.println("Toplam ogrenci Sayisi: " + ogrenciSayisi);
        System.out.println("Ders Sayisi: " + dersListesi.size());
        
    }

    // Öğrencinin aldığı derslerin bilgilerini yazdırma
    public void OgrenciDersBilgiYaz() {
        System.out.println(ad + " adli ogrencinin ders bilgileri:");
        for (Ders ders : dersListesi) {
            ders.DersBilgisiYaz();
        }
    }

    // Ders ekleme metodu
    public void dersEkle(Ders ders) {
        dersListesi.add(ders);
}
}