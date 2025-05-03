#include<stdio.h>
//Simetrik matris kontrol algoritması
int simetrikmi(int matris[][4],int size);
int main(){
int matris[4][4];
printf("4x4 lük matris degerlerini giriniz: \n");
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        scanf("%d",&matris[i][j]);

    }

}


simetrikmi(matris,4);
return 0;

}
int simetrikmi(int matris[][4],int size){
int i,j,flag=1;
for(i=0;i<size;i++){

    for(j=0;j<size;j++){
        printf("%d ",matris[i][j]);

        }
      printf("\n");
    }



for(i=0;i<size;i++){

    for(j=0;j<size;j++){
        if(matris[i][j]!=matris[j][i]){
           flag=0;
           break;

        }

    }
}
if(flag==1){
    printf("Bu simetrik matristir");
}



}
