#include <stdio.h>
#include <string.h>
struct araba{
char isim[20];
char model[20];
int modelyili;
int kasatipi;
float fiyat;


};
int main(){
int sayi;
printf("Araba sayisini giriniz:");
scanf("%d",&sayi);
struct araba array[sayi];
for(int a=0;a<sayi;a++){
printf("%d. araba ismini giriniz: ",a+1);
scanf("%s",array[a].isim);
printf("%d. araba modelini giriniz: ",a+1);
scanf("%s",array[a].model);
printf("%d. araba model yilini giriniz: ",a+1);
scanf("%d",&array[a].modelyili);
printf("%d. araba kasa tipini giriniz[1,2,3]: ",a+1);
scanf("%d",&array[a].kasatipi);
printf("%d. araba fiyatini giriniz: ",a+1);
scanf("%f",&array[a].fiyat);
}
printf("\n....Hatchback....\n");
for(int k=0;k<sayi;k++){
if(array[k].kasatipi==1){
printf("%s %s %d %f\n",array[k].isim,array[k].model,array[k].modelyili,array[k].fiyat);
}
}
printf("\n....Sedan....\n");
for(int k=0;k<sayi;k++){
if(array[k].kasatipi==2){
printf("%s %s %d %f\n",array[k].isim,array[k].model,array[k].modelyili,array[k].fiyat);
}
}
printf("\n....StationWagon....\n");
for(int k=0;k<sayi;k++){
if(array[k].kasatipi==3){
printf("%s %s %d %f\n",array[k].isim,array[k].model,array[k].modelyili,array[k].fiyat);
}

}
return 0;
}
