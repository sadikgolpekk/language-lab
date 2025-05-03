#include<stdio.h>
#include<math.h>
// Ondalik sayi yolla isaretini,tam kismini,ondalik kismini yolla
void fonk(float number,char *sign,float *past,float *after);
int main(){
float number;
printf("Please enter a number: ");
scanf("%f",&number);
char sign;
float past,after;
fonk(number,&sign,&past,&after);
printf("sign:%c\n",sign);
printf("past:%f\n",past);
printf("after:%.3f\n",after);

return 0;
}
void fonk(float number,char *sign,float *past,float *after){
if(number>0){
 *sign='+';
}
else{
 *sign='-';
}
number=fabs(number);
*past=floor(number);
*after=number-(*past);
}
