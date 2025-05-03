#include <stdio.h>
/*İki matrisi carp*/
void carp(int matris1sutun,int matris2sutun,int matris1[][matris1sutun],int matris2[][matris2sutun],int size,int size2);
int main(){
int matris1satir,matris1sutun,matris2satir,matris2sutun;
printf("Merhaba iki matrisi carpan uygulamaya hosgeldiniz\n");
printf("İlk matrisinizin satir ve sutun sayisini giriniz:\n");
scanf("%d",&matris1satir);
scanf("%d",&matris1sutun);
printf("İkinci matrisinizin satir ve sutun sayisini giriniz:\n");
scanf("%d",&matris2satir);
scanf("%d",&matris2sutun);
int matris1[matris1satir][matris1sutun];
int matris2[matris2satir][matris2sutun];
while(matris1sutun!=matris2satir){
  printf("Bu matrisler carpilamaz lutfen tekrar deneyiniz!\a\n");
  printf("İlk matrisinizin satir ve sutun sayisini giriniz:\n");
scanf("%d",&matris1satir);
scanf("%d",&matris1sutun);
printf("İkinci matrisinizin satir ve sutun sayisini giriniz:\n");
scanf("%d",&matris2satir);
scanf("%d",&matris2sutun);
}
int i,j;
printf("İlk matrisimizin degerlerini sirasiyla giriniz");
for(i=0;i<matris1satir;i++){
    for(j=0;j<matris1sutun;j++){
        scanf("%d",&matris1[i][j]);
    }
    printf("\n");

}
printf("ikinci matrisimizin degerlerini sirasiyla giriniz");
for(i=0;i<matris2satir;i++){
    for(j=0;j<matris2sutun;j++){
        scanf("%d",&matris2[i][j]);
    }
    printf("\n");

}
carp(matris1sutun,matris2sutun,matris1,matris2,matris1satir,matris2satir);


return 0;
}
void carp(int matris1sutun,int matris2sutun,int matris1[][matris1sutun],int matris2[][matris2sutun],int matris1satir,int matris2satir){
int toplam=0;
int matrissonuc[matris1satir][matris2sutun];
for(int i=0;i<matris1satir;i++){
    for(int j=0;j<matris2sutun;j++){
        for(int k=0;k<matris2satir;k++){
          toplam+=matris1[i][k]*matris2[k][j];
        }
        matrissonuc[i][j]=toplam;
        toplam=0;

    }


}
for(int a=0;a<matris1satir;a++){
    for(int b=0;b<matris2sutun;b++){
        printf("%d ",matrissonuc[a][b]);
    }
    printf("\n");
}




}

