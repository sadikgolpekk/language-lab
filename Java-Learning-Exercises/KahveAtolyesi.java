/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */



/**
 *
 * @author sadik
 */
import java.util.Scanner;


class urunler{
    
    String ad;
    String ozellik;
    int fiyat;
    
    public urunler(String ad,String ozellik,int fiyat){
        this.ad=ad;
        this.ozellik=ozellik;
        this.fiyat=fiyat;
     
}
    
    
}



public class Kahveatolyesi {

    public static void main(String[] args) {
        int para=500;
         System.out.println("selamlar");
        System.out.println("Toplam paraniz:"+para);
        System.out.println("Eski hafta,eski atolyeye yeni kohne hosgeldiniz!\nhangisini almak istersiniz:(1,4)");
        Scanner istek=new Scanner(System.in);
        
        int sayac=istek.nextInt();
   
        
        urunler kahve=new urunler("americano","sicak",80);
        urunler cay=new urunler("limonlu cay","cok sicak",50);
        urunler tatli=new urunler("marlenka","guzel ici kadayifli",100);
        
        
            switch(sayac){
            
            case 1: // kahve tatli
                 System.out.println("sadik ismarliyor cunku tuana marlenka seviyor");
                System.out.println(kahve.ad+" ile "+tatli.ad+" aldiniz toplam ucret "+(kahve.fiyat+tatli.fiyat));
                System.out.println("Kalan paraniz "+500);
                break;
            
            case 2: // cay tatli
                 System.out.println("sadik ismarliyor cunku tuana marlenka seviyor");
                System.out.println(cay.ad+" ile "+tatli.ad+" aldiniz toplam ucret "+(cay.fiyat+tatli.fiyat));
                  System.out.println("Kalan paraniz "+500);
                break;
                
            case 3: // sadece cay
                 System.out.println("sadik ismarlamiyor cunku tuana marlenka seviyor");
                 System.out.println(cay.ad+" aldiniz toplam ucret "+cay.fiyat);
                   System.out.println("Kalan paraniz "+(para-cay.fiyat));
                break;
            
                
            case 4: // sadece kahve
                 System.out.println("sadik ismarlamiyor cunku tuana marlenka seviyor");
                 System.out.println(kahve.ad+" aldiniz toplam ucret "+kahve.fiyat);
                   System.out.println("Kalan paraniz "+(para-kahve.fiyat));
                break;
                
                
                
                
                
            default: // hic bi sey istemiyor
                System.out.println("kahve atolyesinde belese oturamazsin");
                
            
            
            
        }
        
        
    }
}
