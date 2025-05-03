#include<stdio.h>
int  main(){
int a[5]={1,2,3,4,5}; // Tanımlama Statik Hafıza
for(int i=0;i<5;i++){ 
 printf("%d",a[i]);
}
printf("\n");
int *b=(int*)malloc(sizeof(int)*5); // Tanımlama Dinamik Hafıza
b[3]=8;
b[0]=2;
*(b+1)=10;
*(b+2)=14;
b[4]=12;
for(int i=0;i<5;i++){
printf("%d",a[i]);
}
return 0;
}
