// String icinde string arama
#include<stdio.h>
#include<stdlib.h>
int main(){
char cumle1[50];
char cumle2[50];
printf("Lutfen ilk stringimizi giriniz:");
fgets(cumle1,50,stdin);
printf("Lutfen ikinci stringimizi giriniz:");
fgets(cumle2,50,stdin);

if(stringekle(cumle1,cumle2)==1){
    printf("Aranan kelime cumlede var");
}
else{
    printf("Aranan kelime cumlede yoktur");
}

return 0;
}
int karaktersay(char *k){
int a;
for(a=0;k[a]!='\0' && k[a]!='\n';a++){

}
return a;

}
int stringekle(char *cumle1,char *cumle2){
int bas=karaktersay(cumle1);
int aranan=karaktersay(cumle2);

for(int a=0;a<=bas-aranan;a++){
int b;
    for(b=0;b<aranan;b++){
        if(cumle1[a+b]!=cumle2[b])
            break;
    }
        if(b==aranan)
        return 1;

    }

    return 0;

}
