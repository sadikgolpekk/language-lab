#include <stdio.h>
#include <stdlib.h>
void bul(char *cumle,int *sayac,char istel);
int main(){
char cumle[100];
int sayac=0;
int istel;
printf("Bir cumle giriniz:\n");
fgets(cumle,100,stdin);
printf("Aramak istediginiz harfi giriniz:\n");
scanf("%c",&istel);
bul(cumle,&sayac,istel);
printf("\nCumlede gecen %c sayisi %d kadar",istel,sayac);
return 0;
}
void bul(char *cumle,int *sayac,char istel){
for(int a=0;cumle[a]!='\n' && cumle[a]!='\0';a++){
    if(cumle[a]==istel){
        (*sayac)++;
    }
}
}
