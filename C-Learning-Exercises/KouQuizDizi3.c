#include <stdio.h>
#include<math.h>
float gunubul(float dizi[],int size,float ort);
int main(){
float toplam=0.0;
printf("Altinin gram fiyatinin son 5 gunluk degerini giriniz:");
float dizi[5];
for(int a=0;a<5;a++){
    scanf("%f",&dizi[a]);
    toplam+=dizi[a];
}
float ort=toplam/5.0;
for(int a=0;a<5;a++){
    if(dizi[a]==gunubul(dizi,5,ort)){
        printf("En cok farklilik %d.elemanda olur",a+1);
    }
}

return 0;
}
float gunubul(float dizi[],int size,float ort){
float sonuc=dizi[0];
int sayac=0;
for(int a=0;a<size;a++){
    if(fabs(dizi[a]-ort)>fabs(sonuc-ort)){
        sonuc=dizi[a];

    }

}
return sonuc;

}
