#include<stdio.h>
void bulEnbEnk(int sayi,int *dizi,int size,int *enbuyuk,int *enkucuk);
int main(){
int dizi[4];
int sayi,enbuyuk,enkucuk;
printf("4 basamakli sayiyi giriniz:");
scanf("%d",&sayi);
bulEnbEnk(sayi,dizi,4,&enbuyuk,&enkucuk);
printf("En buyuk rakam %d\n",enbuyuk);
printf("En kucuk rakam %d\n",enkucuk);



return 0;
}
void bulEnbEnk(int sayi,int *dizi,int size,int *enbuyuk,int *enkucuk){
*(dizi)=sayi/1000;
*(dizi+1)=(sayi%1000)/100;
*(dizi+2)=(sayi%100)/10;
*(dizi+3)=(sayi%10);
*enbuyuk=*enkucuk=*dizi;
for(int a=0;a<size;a++){
    if(*enbuyuk<=*(dizi+a)){
        *enbuyuk=*(dizi+a);
    }
    else if(*enkucuk>*(dizi+a)){
        *enkucuk=*(dizi+a);
    }
}
}
