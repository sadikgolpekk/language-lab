#include <stdio.h>
#include <ctype.h>
// Klavyeden girilen en fazla 25 k.uzunlugundaki sozcugun buyugu kucuge kucuge buyuge cevirin
int main(){
char c1='7';
char c2='A';
printf("c1 %c\n",c1);
printf("c2 %c\n",c2);
if(isdigit(c1)){
    printf("c1 bir rakamdir\n");
}
else{
    printf("c1 bir rakam degildir\n");
}
if(isdigit(c2)){
    printf("c2 bir rakamdir\n");
}
else{
    printf("c2 bir rakam degildir\n");
}
if(isalpha(c1)){
    printf("c1 bir harftir\n");
}
else{
    printf("c1 bir harf degildir\n");
}
printf("%c karakterimizin kucuk harf karsiligi %c\n",c2,tolower(c2));

char dizi[25];
printf("Simdi klavyemizden bir string giriniz(en fazla 25 karakter): ");
scanf("%s",dizi);
int a;
for(a=0;dizi[a]!='\0';a++){
  if(isupper(dizi[a])){
        dizi[a]=tolower(dizi[a]);
    }
    else if(islower(dizi[a])){
        dizi[a]=toupper(dizi[a]);
    }
}

printf("%s",dizi);



return 0;

}
