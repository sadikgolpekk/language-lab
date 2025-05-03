#include <stdio.h>
#include<stdlib.h>
#include<time.h>
/*4x4 lük tüm elemanlarının değeri başangıçta 0 olan tamsayi
bir dizinin içine rastgele olacak şekilde 6 adet 1 yerleştiren
fonksiyonu main ile birlikte yaziniz*/
void mayin(int matris[][4],int size);
int main(){

int matris[4][4]={0};
int i,j;
srand(time(NULL));
mayin(matris,4);
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        printf("%d ",matris[i][j]);
    }
    printf("\n");
}

return 0;
}
void mayin(int matris[][4],int size){
int a,b;
for(int k=0;k<size;k++){
a=rand()%size;
b=rand()%size;
if(matris[a][b]==0){
   matris[a][b]=1;
}
else{
    k--;
}
}

}
