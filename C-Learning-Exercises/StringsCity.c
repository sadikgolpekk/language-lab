#include<stdio.h>
#include<string.h>
// Klavyeden girilen il isminin kac harfli oldugunu bul
// Klavyeden girilen ismi tersten yazdir
int main(){
char harf[50];
int a=0;
printf("Lutfen sehir ismi giriniz: ");
scanf("%s",harf);
while(*(harf+a)!='\0'){
    a++;
}
printf("Bu kelime %d harften olusur\n",a);

for(int x=a-1;x>=0;x--){
  printf("%c",harf[x]);
}


return 0;
}
