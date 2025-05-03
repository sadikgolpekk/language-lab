#include <stdio.h>
#include <math.h>
struct nokta{
int x;
int y;

};
double Hesapla(struct nokta n1,struct nokta n2){

    return sqrt(pow(n1.x-n2.x,2)+pow(n1.y-n2.y,2));
}


int main(){
struct nokta n1;
struct nokta n2;
printf("Lutfen birinci noktayi giriniz:\n");
scanf("%d%d",&n1.x,&n1.y);
printf("Lutfen ikinci noktayi giriniz\n");
scanf("%d%d",&n2.x,&n2.y);

printf("Birinci nokta %d %d\n",n1.x,n1.y);
printf("Ikinci nokta %d %d\n",n2.x,n2.y);

double uzaklik=Hesapla(n1,n2);
printf("nokta 1 ve nokta 2 arasindaki uzaklik %lf",uzaklik);
return 0;
}
