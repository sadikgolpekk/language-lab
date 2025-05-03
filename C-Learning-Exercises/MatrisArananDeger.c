#include<stdio.h>
int arama(int dizi[][4],int size,int aranacak);
int main(){
int matris[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int aranacak;
printf("Aranacak degeri giriniz: ");
scanf("%d",&aranacak);
arama(matris,4,aranacak);
return 0;
}
int arama(int dizi[][4],int size,int aranacak){
int a,b;
for(a=0;a<size;a++){
   for(b=0;b<size;b++){
     printf("%d ",dizi[a][b]);
   }
    printf("\n");
}
for(a=0;a<size;a++){
   for(b=0;b<size;b++){
     if(aranacak==dizi[a][b]){
       printf("%d. satir %d. sutunda aranan deger bulunmustur",a+1,b+1);
       break;
     }

   }
    printf("\n");
}

}
