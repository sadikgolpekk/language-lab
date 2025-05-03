#include<stdio.h>
//String birlestirme
// buyugu kucuk kucugu buyuk yazdirma
int main(){
char cumle1[100];
char cumle2[50];
puts("Lutfen ilk cumleyi giriniz");
fgets(cumle1,50,stdin);
puts("Lutfen ikinci cumleyi giriniz");
fgets(cumle2,50,stdin);
stringekle(cumle1,cumle2);
puts("Eklenmis cumle:");
puts(cumle1);

return 0;
}
void stringekle(char *cumle1,char *cumle2){
int ilk=karaktersay(cumle1);
int son=karaktersay(cumle2);

for(int i=0;i<son;i++){
*(cumle1+i+ilk)=*(cumle2+i);
}
*(cumle1+ilk+son)='\0';
}
int karaktersay(char *b){
int a;
for(a=0;b[a]!='\0' && b[a]!='\n';a++){

}
 return a;
}
