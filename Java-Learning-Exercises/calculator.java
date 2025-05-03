
import java.util.Scanner; // Scanner classını import ediyoruz.

public class calculator{ // calculator classı olusturuluyor

  public static void main(String args[]){
    int secim;
   int a,b,sum;
   Scanner keyboard=new Scanner(System.in); // Scanner'in nesnesi 'keyboard' adıyla tanımlandı.
    System.out.println("Lutfen secim yapiniz(1-2):\n1.Toplama\n2.Carpma ");
    secim=keyboard.nextInt();
   if(secim==1){ // toplama yapilir
     a=keyboard.nextInt();
     b=keyboard.nextInt();
     sum=a+b;
     System.out.println("Sayilarin toplami "+sum);

   }
   else if(secim==2){ // carpma yapilir
      a=keyboard.nextInt();
      b=keyboard.nextInt();
     sum=a*b;
      System.out.println("Sayilarin carpimi "+sum);
   }
    else{
     System.out.println("Gecersiz islem,cikis yapiliyor...");
      System.exit(0);
    }
    keyboard.close();
    
  }

}

