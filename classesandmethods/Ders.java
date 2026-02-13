/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.classesandmethods;

/**
 *
 * @author sadik
 */
public class Ders {
    private String ad; // Ders adı
    private int sinif; // Dersin ait olduğu sınıf
    private String hoca; // Dersi veren öğretmen
    private static int dersSayisi = 0; // Toplam ders sayısı (statik)

    // Default Constructor
    public Ders() {
        this.ad = "Bilinmiyor";
        this.sinif = 0; // Varsayılan olarak 0. sınıf
        this.hoca = "Bilinmiyor";
        dersSayisi++;
    }
    
      public Ders(String ad) { //tek parametreli
        this.ad = ad;
        this.sinif = 0; 
        this.hoca = hoca;
        dersSayisi++;
    }
    
    

    // 3 parametreli Constructor
    public Ders(String ad, int sinif, String hoca) {
        this.ad = ad;
        this.sinif = sinif;
        this.hoca = hoca;
        dersSayisi++;
    }

    // Ders bilgilerini yazdırma
    public void DersBilgisiYaz() {
        System.out.println("Ders Adi: " + ad);
        System.out.println("Sinif: " + sinif);
        System.out.println("Hoca: " + hoca);
    }

    // Toplam ders sayısını yazdırma
    public static void DersSayiBilgisiYaz() {
        System.out.println("Toplam Ders Sayisi: " + dersSayisi);
}
}