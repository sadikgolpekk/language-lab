/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.javalab7;

class Animal{
    String isim;
    int yas;
    
 public Animal(String isim,int yas){
     this.isim=isim;
     this.yas=yas;
 }
    
    void sesCikar(){
        System.out.println("Bu hayvan ses cikaryor!");
    }
    
     void hareketEt(){
        System.out.println("Bu hayvan hareket ediyor!");
    }
    
    
}

class Cat extends Animal{
    
    public Cat(String isim,int yas){
    super(isim,yas);
}
    
    @Override
    void sesCikar(){
        System.out.println("Miyav!");
    }
    void oyuncakOyna(){
        System.out.println("Kedi oyuncakla oynuyor");
     }
    
}

class Dog extends Animal{
    
       public Dog(String isim,int yas){
    super(isim,yas);
}
    
    @Override
    void sesCikar(){
        System.out.println("Hav Hav!");
    }
  
    void topOyna(){
        System.out.println("Kopek top oynuyor");    
}
    
}

class Bird extends Animal{
    
       public Bird(String isim,int yas){
       super(isim,yas);
      }
    
    @Override 
    void sesCikar(){
        System.out.println("Cik cik!");
}
    void uc(){
        System.out.println("Kus ucuyor");
    }
    
}



/**
 *
 * @author sadik
 */
public class Javalab7 {

    public static void main(String[] args) {
        Animal hayvanlar[]=new Animal[3];
        
        hayvanlar[0]=new Cat("tekir",15);
        hayvanlar[1]=new Dog("Akkus",12);
        hayvanlar[2]=new Bird("Cisikus",4);
        
        
        for(Animal hayvan:hayvanlar){
            hayvan.sesCikar();
            
        }
        for(Animal hayvan:hayvanlar){
            hayvan.hareketEt();
            
        }
        for(Animal hayvan:hayvanlar){
        
       if(hayvan instanceof Cat){
           Cat kedi=(Cat)hayvan;
           kedi.oyuncakOyna();
       }
       else if(hayvan instanceof Dog){
           Dog kopek=(Dog)hayvan;
           kopek.topOyna();
       }
     
     }
    
        
    }
}
