#include<stdio.h>
#include<string.h>
void ayir(char *cumle,int *sayac);
// Bir cumlenin kelime sayisini bulma
// String icinde string arama
int main(){
char cumle[100];
int sayac=0;
printf("Lutfen bir cumle giriniz:");
fgets(cumle,100,stdin);
ayir(cumle,&sayac);
printf("Cumlemiz %d kelimeden olusmaktadir",sayac);

return 0;
}
void ayir(char *cumle,int *sayac){
int size=strlen(cumle);

if(cumle[0]!=' '){
    (*sayac)++;
}
for(int a=0;a<size;a++){
    if(cumle[a]==' ' && cumle[a+1]!=' '){
        (*sayac)++;
    }
}
}
