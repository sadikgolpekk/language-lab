#include<stdio.h>
#include<stdlib.h>
int main(){
char dogru[30];
char cevap[30];
float puan;
puts("Ogrenci cevaplarini giriniz");
fgets(dogru,30,stdin);
puts("Dogru cevaplari giriniz");
fgets(cevap,30,stdin);
puanhesapla(dogru,cevap,&puan);
printf("Puanınız %f",puan);



return 0;
}
void puanhesapla(char *dogru,char *cevap,float *puan){
float sayac=0.0;
int a;
for(a=0;dogru[a]!='\0' && cevap[a]!='\0' && dogru[a]!='\n' && cevap[a]!='\n';a++){
    if(dogru[a]==cevap[a]){
        sayac++;
    }

}
*puan=((sayac/a)*100);


}
