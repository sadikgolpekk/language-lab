#include<stdio.h>
#include<ctype.h>
// Girdigimiz isimleri siralanis ekraninin tersine gore yazdir
// girecegimiz karakterlerde a ile baslayanlari yazdir
int main(){
char name[5][10]; // Satir kismi kelime sayisini Sutun sayisi max alabileceği karakter sayisini ifade eder
printf("Isimleri giriniz: ");
for(int i=0;i<5;i++){
scanf("%s",name[i]);
}
printf("\n");
printf("Isimlerin tersi: \n");
for(int i=4;i>=0;i--){
printf("%s\n",name[i]);
}
printf("A/a karakteri ile baslayanlar: \n");
for(int i=0;i<4;i++){
   if(name[i][0]=='a' || name[i][0]=='A'){
    printf("%s\n",name[i]);
   }
}
return 0;
}
