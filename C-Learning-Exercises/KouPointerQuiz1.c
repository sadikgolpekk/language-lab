#include<stdio.h>
void toplampara(int ellikr,int yirmibeskr,int onkr,int beskr,float *toplam);
int main(){
int ellikr,yirmibeskr,onkr,beskr;
float toplam;
printf("Merhaba\n");
printf("50 kr miktarini giriniz: \n");
scanf("%d",&ellikr);
printf("25 kr miktarini giriniz: \n");
scanf("%d",&yirmibeskr);
printf("10 kr miktarini giriniz: \n");
scanf("%d",&onkr);
printf("5 kr miktarini giriniz: \n");
scanf("%d",&beskr);
toplampara(ellikr,yirmibeskr,onkr,beskr,&toplam);
printf("Toplam paramiz %.2f TL",toplam/100);

return 0;
}
void toplampara(int ellikr,int yirmibeskr,int onkr,int beskr,float *toplam){
*toplam=0.0;
*toplam=(ellikr*50)+(yirmibeskr*25)+(onkr*10)+(beskr*5);
}

