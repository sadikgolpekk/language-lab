#include <stdio.h>
// toplam,fark,carpim,bolum,cıkıs
int main() {
int tus;
printf("Ilkel hesap makinemize hosgeldiniz: \n");
printf("Devam etmek icin herhangi bir tusa cikmak icin 0'a basiniz:\n");
scanf("%d",&tus);
while(tus!=0){
printf("Iki sayi degeri giriniz: \n");
int sayi1,sayi2;
scanf("%d%d",&sayi1,&sayi2);
int topla,cikar,carp;
float bol;
toplam(&topla,sayi1,sayi2);
cikart(&cikar,sayi1,sayi2);
carpim(&carp,sayi1,sayi2);
bolum(&bol,sayi1,sayi2);
printf("Sayilarin toplami %d\n",topla);
printf("Sayilarin farki %d\n",cikar);
printf("Sayilarin carpimi %d\n",carp);
printf("Sayilarin bolumu %f\n",bol);
printf("Devam etmek icin herhangi bir tusa cikmak icin 0'a basiniz:\n");
scanf("%d",&tus);

}
return 0;
}
void toplam(int *topla,int sayi1,int sayi2){
*topla=sayi1+sayi2;

}
void cikart(int *cikar,int sayi1,int sayi2){
*cikar=sayi1-sayi2;

}
void carpim(int *carp,int sayi1,int sayi2){
*carp=sayi1*sayi2;

}
void bolum(float *bol,int sayi1,int sayi2){
*bol=(float)sayi1/sayi2;
}
