#include<stdio.h>
#include<ctype.h>
void asalatamamla(int sayi,int *asal);
int main(){
int sayi,asal;
printf("Lutfen tam sayiyi giriniz: ");
scanf("%d",&sayi);
asalatamamla(sayi,&asal);
printf("\n%d",asal);


return 0;
}
void asalatamamla(int sayi,int *asal){
int flag;
sayi=sayi+1;
for(int a=sayi;1;a++){
    flag=1;
    for(int b=a-1;b>=2;b--){
      if(a%b==0){
        flag=0;
      }
    }
    if(flag==1){
      *asal=a;
      break;
    }
}

}
