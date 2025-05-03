#include<stdio.h>
#include<ctype.h>
#include<string.h>
int karakterbul(char *cumle,char a);
int karakteruzunlugu(char *cumle);
// String icinde karakter ara ilk fonk karakter sayisi
// Eger aradıgımız karakter yoksa -1 dondursun varsa kacıncı indekste donduruyor.
int main(){
char cumle[100];
int size;
printf("Lutfen bir cumle giriniz: \n");
fgets(cumle,100,stdin);
printf("Cumlenizin karakter uzunlugu %d\n",karakteruzunlugu(cumle));
int sonuc=karakterbul(cumle,'a');
if(sonuc==-1){
    printf("Cumlede a karakteri yoktur");
}
else{
    printf("Cumlede a karakteri %d. indexte var",sonuc);
}

return 0;
}
int karakteruzunlugu(char *cumle){
int a;
for(a=0;cumle[a]!='\0' && cumle[a]!='\n';a++){
}
return a;
}
int karakterbul(char *cumle,char a){
for(int b=0;cumle[b]!='\0' && cumle[b]!='\n';b++){
    if(cumle[b]==a){
        return b;
    }
}
return -1;

}
