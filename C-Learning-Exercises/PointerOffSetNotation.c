#include<stdio.h>
void EnbEnk(int *dizi,int *enbuyuk,int *enkucuk,int size);
//Kendisine gonderilen tamsayi bir dizinin en buyuk ve en kucuk elemanlarini bulan fonksiyonu pointer offset notation yontemini uyglayarak yap
int main(){
int dizi[5]={5,7,3,1,8};// enbuyuk 8 enkucuk 1
int enbuyuk,enkucuk;
EnbEnk(dizi,&enbuyuk,&enkucuk,5);
printf("%d ",enbuyuk);
printf("%d ",enkucuk);
return 0;
}
void EnbEnk(int *dizi,int *enbuyuk,int *enkucuk,int size){
*enbuyuk=*enkucuk=*dizi;// Baslangıcını tayin ettik
for(int a=0;a<size;a++){
  if(*(dizi+a)>*enbuyuk){
    *enbuyuk=*(dizi+a);
  }
    if(*(dizi+a)<*enkucuk){
    *enkucuk=*(dizi+a);
  }

}

}
