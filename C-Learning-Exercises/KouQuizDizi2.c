#include <stdio.h>
#include<math.h>
/*Kullanici tarafindan boyutlari girilen dizinin elemanlarinin tek ve cift sayi toplamlarini
ayri ayri hesaplayan buyuk olan degerin ana fonksiyonda yazdirilmasini sagla*/
int buyukToplamiBul(int array[],int x);
int main(){
int x;
printf("Boyut degeri giriniz: ");
scanf("%d",&x);
int dizi[x];
printf("Dizi elemanlarini giriniz: ");
for(int a=0;a<x;a++){
   scanf("%d",&dizi[a]);
}
if(buyukToplamiBul(dizi,x)==1){
printf("\n\nTek sayilar toplami daha buyuktur");

}
else{
    printf("\n\nCift sayilar toplami daha buyuktur");
}



return 0;
}
int buyukToplamiBul(int array[],int x){
int toplamtek=0;
int toplamcift=0;
for(int a=0;a<x;a++){
  if(array[a]%2==0){
    toplamcift+=array[a];
  }
}
printf("\nCift sayilarin toplami %d ",toplamcift);
for(int a=0;a<x;a++){
  if(array[a]%2!=0){
    toplamtek+=array[a];
  }
}
  printf("\nTek sayilarin toplami %d ",toplamtek);
if(toplamtek>toplamcift){
    return 1;
}
else{
    return 0;
}


}

