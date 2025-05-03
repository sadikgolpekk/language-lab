
#include <stdio.h>
#include <stdlib.h>

int main(){

int dizi[5]={2,12,10,9,5};
int evirmecount=0;

for(int a=0;a<5;a++){
   
  for(int b=a;b<5;b++){
    if(dizi[a]>dizi[b])
      evirmecount++;
   }

}
printf("evirme sayimiz %d ",evirmecount);

return 0;
}
