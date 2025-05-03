#include <stdio.h>
#include<math.h>
//0-100 arasi rasgele 10 tane sayi dizi1
//Bunlari kucukten buyuge dizi2
// Once tek sonra cift
int main(){
int dizi[10];
srand(time(NULL));
for(int a=0;a<10;a++){
    dizi[a]=rand()%101;
}
printf("Dizinin random hali: ");
for(int a=0;a<10;a++){
printf("%d ",dizi[a]);
}
printf("\nDizinin kucukten buyuge siralanmis hali: ");
int temp;
int dizi2[10];
int dizi3[10];
for(int a=0;a<10;a++){
    for(int b=0;b<9;b++){
        if(dizi[b]>dizi[b+1]){
            temp=dizi[b];
            dizi[b]=dizi[b+1];
            dizi[b+1]=temp;
        }

    }
}
for(int c=0;c<10;c++){
  dizi2[c]=dizi[c];
}
for(int a=0;a<10;a++){
printf("%d ",dizi2[a]);
}
for(int d=0;d<10;d++){
  dizi3[d]=dizi2[d];
}
printf("\nOnce tekler sonra ciftler: ");
for(int a=0;a<10;a++){
if(dizi3[a]%2!=0){
printf("%d ",dizi3[a]);
}
}
for(int a=0;a<10;a++){
if(dizi3[a]%2==0){
printf("%d ",dizi3[a]);
}
}





return 0;
}
