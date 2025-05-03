#include<stdio.h>
//Matrisin ters kosegenlerini bulma
int main(){
int matris[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int i,j;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("%3d ",matris[i][j]);
    }
    printf("\n");

}
dizi(matris,4);


return 0;
}
int dizi(int matris[][4],int size){
int i,j;
for(i=0;i<4;i++){
        printf("%3d ",matris[i][3-i]);
        printf("\n");
    }


}
