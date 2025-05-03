#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int Nilpotent(int x,int matris[][x],int toplam[][x]);
int main(){
srand(time(NULL));
//Nilpotent matris
printf("Kare matrisin boyutunu giriniz(2): ");
int x;
scanf("%d",&x);
int matris[x][x];
for(int a=0;a<x;a++){
    for(int b=0;b<x;b++){
        scanf("%d",&matris[a][b]);
    }
}
printf("\n\n");
int toplam[2][2]={0};
int sonuc=Nilpotent(x,matris,toplam);
if(sonuc==1){
   printf("Matrisimiz nilpotenttir");
   }
else if(sonuc==0){
        printf("Matrisimiz nilpotent degildir");
    }



return 0;
}
int Nilpotent(int x,int matris[][x],int toplam[][x]){
for(int a=0;a<x;a++){
    for(int b=0;b<x;b++){
        for(int k=0;k<x;k++){
            toplam[a][b]+=matris[a][k]*matris[k][b];

        }
    }
}
for(int a=0;a<x;a++){
    for(int b=0;b<x;b++){
        printf("%d ",toplam[a][b]);
        }
     printf("\n");
    }

printf("\n\n");
for(int a=0;a<x;a++){
    for(int b=0;b<x;b++){
        if(toplam[a][b]!=0){
            return 0;
        }

    }
}
return 1;

}
