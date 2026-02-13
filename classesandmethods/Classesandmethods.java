/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.classesandmethods;

/**
 *
 * @author sadik
 */
import java.util.ArrayList;

public class Classesandmethods {
    public static void main(String[] args) {
        // 1. Öğrenci: Default Constructor
        Ogrenci ogr1 = new Ogrenci();
        ogr1.OgrenciBilgisiYaz();

      
        
        // 2. Öğrenci: 1 parametreli Constructor
        Ogrenci ogr2 = new Ogrenci("Ali"); 
        ogr2.OgrenciBilgisiYaz();

        // 3. Öğrenci: 3 parametreli Constructor
        ArrayList<Ders> dersListesi = new ArrayList<>();
        dersListesi.add(new Ders("Matematik", 12, "Ahmet Hoca"));
        dersListesi.add(new Ders("Fizik", 12, "Mehmet Hoca"));
        
        
        Ogrenci ogr3 = new Ogrenci("Ayse",12,dersListesi); 
        ogr3.OgrenciBilgisiYaz();

        // Ders bilgisi ekleme ve yazdırma
        ogr3.OgrenciDersBilgiYaz();

        // Toplam ders sayısını yazdırma
        Ders.DersSayiBilgisiYaz();
}
}