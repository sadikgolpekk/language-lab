#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Bubble sorting(Kucukten Buyuge)(Buyukten kucuge)
int main(){
srand(time(NULL));
int matris[3][4];
for(int a=0;a<3;a++){
    for(int b=0;b<4;b++){
        matris[a][b]=rand()%101;
    }
}
yazdir(matris,3);

BubbleSortBS(matris,3);

for(int a=0;a<3;a++){
    printf("%d. satir: ",a+1);
    for(int b=0;b<4;b++){
        printf("%d ",matris[a][b]);
    }
    printf("\n");
}

BubbleSortKS(matris,3);

for(int a=0;a<3;a++){
    printf("%d. satir: ",a+1);
    for(int b=0;b<4;b++){
        printf("%d ",matris[a][b]);
    }
    printf("\n");
}
return 0;
}
void yazdir(int matris[][4],int size){
for(int a=0;a<3;a++){
    printf("%d. satir: ",a+1);
    for(int b=0;b<4;b++){
        printf("%d ",matris[a][b]);
    }
    printf("\n");
}
}
void BubbleSortBS(int matris[][4],int size){
//Buyukten kucuge sirala
int temp;
for(int a=0;a<size;a++){
    for(int b=0;b<size;b++){
        for(int k=0;k<4;k++){
            if(matris[k][b]<matris[k][b+1]){
                temp=matris[k][b];
                matris[k][b]=matris[k][b+1];
                matris[k][b+1]=temp;
            }
        }
    }
    printf("\n");
}


}
void BubbleSortKS(int matris[][4],int size){
//Kucukten Buyuge sirala
int temp;
for(int a=0;a<size;a++){
    for(int b=0;b<size;b++){
        for(int k=0;k<4;k++){
            if(matris[k][b]>matris[k][b+1]){
                temp=matris[k][b];
                matris[k][b]=matris[k][b+1];
                matris[k][b+1]=temp;
            }
        }
    }
    printf("\n");
}


}

