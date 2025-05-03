#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
//5x5 lük matrisimize rasgele atanan degerler olsun
int dizi[5][5];
srand(time(NULL));
int sayi;
printf("Kac tane 1 istersiniz");
scanf("%d",&sayi);
int sayac=0;
for(int a=0;a<5;a++){

    for(int b=0;b<5;b++){
     dizi[a][b]=rand()%2;
     if(dizi[a][b]==1){
      sayac++;
     }
        if(sayi<sayac){
        dizi[a][b]=0;
     }
     printf("%d ",dizi[a][b]);

     }
    printf("\n");
}


return 0;
}
