/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.proje1;

/**
 *
 * @author sadik
 */
public class Proje1 {
    
    int f(int x){ // method
        return x*2;
    }

    public static void main(String[] args) {
        
        int x=10;
        char c=109;
        float f=120;
        int n=(int)3.14;
        System.out.println(n++);
        System.out.println(++n);
        
        String greeting;
        greeting = "Hello!";
        System.out.println(greeting);
        
        if(n==1 && ++n>2){
            
  
        }
        System.out.println(n);
        
        String s= ""+123;
        String sayi="123";
        int say=Integer.parseInt(sayi); // Wrapper class
        System.out.println(say+5);
        
        // int []a;
        int a[]={1,2,377,44,3,4,5}; // dizi tanımlanması
       // a=new int[10];
       
        for(int k=0;k<a.length;k++){ // döngü ile dizi içi gezinme
            
            System.out.println(a[k]);
        }
        int b[]=a; // dizinin aynısını gösteren sistem ikisinden birini değiştirirsen ikisi de etkilenir, shallow copy
        b[2]=10; // a'nın ikinci degeri de degisir.
        for(int k=0;k<a.length;k++){ // döngü ile dizi içi gezinme
            
            System.out.println(a[k]);
        }
        
        
        
        
        calisan ali=new calisan(); // Ali objesi tanımlandı.
        ali.boy=180;
        ali.kilo=80;
        ali.yas=22;
        System.out.println("alinin yasi "+ali.yas+" alinin kilosu "+ali.kilo+" alinin boyu "+ali.boy);
        insan veli=new insan();
        veli.boy=170;
        veli.kilo=70;
        veli.yas=23;
        System.out.println("velinin yasi "+veli.yas+" velinin kilosu "+veli.kilo+" velinin boyu "+veli.boy);
        ali.yemek();
        veli.yemek();
        System.out.println("alinin yasi "+ali.yas+" alinin kilosu "+ali.kilo+" alinin boyu "+ali.boy);
        System.out.println("velinin yasi "+veli.yas+" velinin kilosu "+veli.kilo+" velinin boyu "+veli.boy);
        ali.maas=100;
        ali.zam(20);
        System.out.println("Alinin zamli maasi "+ali.maas);
        ali.zam(30);
        System.out.println("Alinin zamli maasi "+ali.maas);
    
    }  
}
