#include <stdio.h>
//girdigimiz saniyeyi dinamik bir şekilde pointer kullanarak saat dakika ve saniye olarak göster.
int hesapla(int saniye,int *saat,int *dakika,int *sn);
int main(){
int saniye,saat,dakika,sn;
while(1){
printf("Saniye degerini giriniz: ");
scanf("%d",&saniye);
hesapla(saniye,&saat,&dakika,&sn);
printf("%d saat %d dakika %d saniye.\n",saat,dakika,sn);
}
return 0;
}
int hesapla(int saniye,int *saat,int *dakika,int *sn){
*sn=saniye%60;
*dakika=(saniye/60)%60;
*saat=saniye/3600;

}
