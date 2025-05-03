 #include<stdio.h>
int main(){
//Satirlari Sıralama Bubble Sorting
int satir,sutun;
printf("Merhaba satir degeri ve sutun degeri girer misiniz?\n");
scanf("%d",&satir);
printf("\n");
scanf("%d",&sutun);
int matris[satir][sutun];
printf("Matris degerlerini giriniz:");
for(int i=0;i<satir;i++){
    for(int j=0;j<sutun;j++){
        scanf("%d",&matris[i][j]);
    }
    printf("\n");
}
for(int i=0;i<satir;i++){
    for(int j=0;j<sutun;j++){
        printf("%d ",matris[i][j]);
    }
    printf("\n");
}
sirala(sutun,matris,satir);

return 0;
}
void sirala(int sutun,int matris[][sutun],int satir){
int temp,k;

//bubble sorting yaparak satirlari buyukten kucuge gore sirala
for(int i=0;i<satir;i++){
    for(int j=0;j<sutun;j++){
     for(k=0;k<sutun-1;k++){
     if(matris[i][k]>matris[i][k+1]){
     temp=matris[i][k];
     matris[i][k]=matris[i][k+1];
     matris[i][k+1]=temp;
     }
     }
    }
}
printf("\n");
for(int i=0;i<satir;i++){
    for(int j=0;j<sutun;j++){
        printf("%d ",matris[i][j]);
    }
    printf("\n");
}




}
