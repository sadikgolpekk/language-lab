#include<stdio.h>
#include<string.h>
int ayir(char *cumle,char *cumle2);
// Bir cumlenin kelime sayisini bulma
// String icinde string arama
int main(){
char cumle[100];
char cumle2[100];
int sayac=0;
printf("Lutfen bir cumle giriniz: ");
fgets(cumle,100,stdin);
printf("Lutfen ikinci cumleyi giriniz: ");
fgets(cumle2,100,stdin);
ayir(cumle,cumle2);
return 0;
}
int ayir(char *cumle,char *cumle2){
int size=strlen(cumle);
int b=0;
int a;
if(cumle[0]!=' ' && cumle[1]!=' '){
        for(a=0;cumle[a]!=' ' && cumle[a]!='\0';a++){
       if(cumle[a]==cumle2[a]){
          b++;
       }
    }
        if(b==a){
        printf("Cumlede vardir");
    }
}
        for(a=0;cumle[a]==' ' && cumle[a+1]!=' ';a++){
       if(cumle[a]==cumle2[a]){
          b++;
       }
    }
        if(b==a){
        printf("Cumlede vardir");
    }
}
