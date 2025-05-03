#include<stdio.h>
#include<stdlib.h>
int main(){
char varsayilan[50]="Seni dinliyorum:";
char cevap[50]="Evet haklisin";
char cevap2[50]="Sorunun cevabini bilmiyorum";
char cevap3[50]="Bagirmana gerek yok";
char cevap4[50]="Cumle yarim kalmis tekrar yaz";
char dizi[100];
puts(varsayilan);
while (1) {
fgets(dizi, 100, stdin);
if (dizi[0] == '.') {
    break; // Kullanıcı bir nokta ile başladığında döngüden çık
        }
chatgpt0(varsayilan, cevap, cevap2, cevap3, cevap4, dizi);
    }
return 0;
}
void chatgpt0( char *varsayilan,char *cevap,char *cevap2,char *cevap3,char *cevap4,char *dizi){
int a;
int sinir=karaktersay(dizi);
if(dizi[sinir-1]=='.'){
    puts(cevap);
}
else if(dizi[sinir-1]=='?'){
    puts(cevap2);
}
else if(dizi[sinir-1]=='!'){
    puts(cevap3);
}
else{
    puts(cevap4);
}
puts(varsayilan);
}
int karaktersay(char *dizi){
int a;
for(a=0;dizi[a]!='\0' && dizi[a]!='\n';a++){
}
return a;

}
