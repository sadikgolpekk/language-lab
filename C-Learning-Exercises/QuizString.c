#include<stdio.h>
#include<ctype.h>
int main(){
char sifre[100];
printf("Lutfen sifrelenecek metni giriniz: ");
fgets(sifre,100,stdin);
sifrele(sifre);
desifre(sifre);
return 0;
}
void sifrele(char *sifre){
int sayac=0;
int sayac2=0;
for(int a=0;sifre[a]!='\0' && sifre[a]!='\n';a++){
    sayac++;
}
char cevap[sayac];
for(int a=0;a<sayac;a++){
    cevap[a]=sifre[a]+10;
    if(isalpha(cevap[a])){
        if(islower(cevap[a])){
            sayac2++;
        }
    }
}

printf("Sifrelenmis metin:%s%d%d",cevap,sizeof(cevap),sayac2);

}
void desifre(char *sifre){
printf("\nDesifre edilmis metin: ");
printf("%s",sifre);
}
