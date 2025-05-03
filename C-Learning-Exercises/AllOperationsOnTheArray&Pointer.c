#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void yazdir(int *dizi,int size);
void yazdir2(int *dizi,int size);
void EnbuyukEnkucuk(int *dizi,int size,int *enbuyuk,int *enkucuk);
void BuyuktenKucuge(int *dizi,int size);
void KucuktenBuyuge(int *dizi,int size);
void BuyuktenKucugeYazdir(int *dizi,int size);
void KucuktenBuyugeYazdir(int *dizi,int size);
void Ortalama(int *dizi,int size,float *ort);
int main(){
srand(time(NULL));
int dizi[20];
int enbuyuk,enkucuk;
float ort;
yazdir(dizi,20);
EnbuyukEnkucuk(dizi,20,&enbuyuk,&enkucuk);
printf( "\nEn buyuk eleman %d\n",enbuyuk);
printf("En kucuk eleman %d\n",enkucuk);
BuyuktenKucuge(dizi,20);
BuyuktenKucugeYazdir(dizi,20);
KucuktenBuyuge(dizi,20);
KucuktenBuyugeYazdir(dizi,20);
Ortalama(dizi,20,&ort);
printf("\nDizinin ortalamasi %f",ort);
return 0;
}
void yazdir(int *dizi,int size){
for(int a=0;a<size;a++){
  *(dizi+a)=rand()%100;
}
 yazdir2(dizi,20);
}
void yazdir2(int *dizi,int size){
for(int a=0;a<size;a++){
  printf("%d ",*(dizi+a));
}

}
void EnbuyukEnkucuk(int *dizi,int size,int *enbuyuk,int *enkucuk){
*enbuyuk=*enkucuk=*dizi;
for(int a=0;a<size;a++){
    if(*enkucuk>*(dizi+a)){
        *enkucuk=*(dizi+a);
    }
    else if(*enbuyuk<*(dizi+a)){
        *enbuyuk=*(dizi+a);
    }
}

}
void BuyuktenKucuge(int *dizi,int size){
    int temp;
    printf("\nBuyukten Kucuge: \n");
for(int a=0;a<size;a++){
    for(int b=0;b<size-1;b++){
        if(*(dizi+b+1)>*(dizi+b)){
            temp=*(dizi+b);
            *(dizi+b)=*(dizi+b+1);
            *(dizi+b+1)=temp;
        }
    }
}
}
void KucuktenBuyuge(int *dizi,int size){
    int temp;
    printf("\nKucukten Buyuge: \n");
for(int a=0;a<size;a++){
    for(int b=0;b<size-1;b++){
        if(*(dizi+b+1)<*(dizi+b)){
            temp=*(dizi+b);
            *(dizi+b)=*(dizi+b+1);
            *(dizi+b+1)=temp;
        }
    }
}
}
void BuyuktenKucugeYazdir(int *dizi,int size){
for(int k=0;k<size;k++){
    printf("%d ",*(dizi+k));
}
printf("\n");

}
void KucuktenBuyugeYazdir(int *dizi,int size){
for(int k=0;k<size;k++){
    printf("%d ",*(dizi+k));
}

}
void Ortalama(int *dizi,int size,float *ort){
int toplam=0;
for(int a=0;a<size;a++){
    toplam+=*(dizi+a);
}
*ort=(float)toplam/size;

}
