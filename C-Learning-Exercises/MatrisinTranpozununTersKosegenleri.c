#include<stdio.h>
//Matrisin transpozesinin ters kosegenlerini bulma
int main(){
int matris[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int transpoze[4][4];
int i,j;
printf("Bu matrisimizin kendisidir: \n");
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("%3d ",matris[i][j]);

    }
    printf("\n");

}
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        transpoze[j][i]=matris[i][j];

    }
    printf("\n");

}

printf("Bu matrisimizin transpozesidir: \n");
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      printf("%3d ",transpoze[i][j]);

    }
    printf("\n");

}
printf("\n\n\n");
dizi(transpoze,4);


return 0;
}
int dizi(int transpoze[][4],int size){
int i,j;
printf("Bu da transpozemizin ters kosegenleridir: \n");
for(i=0;i<4;i++){
        printf("%3d ",transpoze[i][3-i]);
        printf("\n");
    }


}
