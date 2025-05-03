#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void kirp(int *sayi,int size);
int main(){
int sayi,size;
printf("Enter a number value: ");
scanf("%d",&sayi);
printf("\nHow many numbers should be deleted from the right?: ");
scanf("%d",&size);
kirp(&sayi,size);
printf("New number is:%d",sayi);
return 0;
}
void kirp(int *sayi,int size){
while(size>0){
 *sayi=*sayi/10;
 size--;
}

}
