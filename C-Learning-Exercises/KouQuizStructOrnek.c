#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct kapasite{
char cins[6];
float miktar;
};
struct kapasite yukariDonustur(struct kapasite *a){
if(strcmp(a->cins,"gb")==0){
    a->miktar=a->miktar/1024;
    strcpy(a->cins,"tb");

}
if(strcmp(a->cins,"mb")==0){
    a->miktar=a->miktar/1024;
    strcpy(a->cins,"gb");

}
if(strcmp(a->cins,"kb")==0){
    a->miktar=a->miktar/1024;
    strcpy(a->cins,"mb");

}
if(strcmp(a->cins,"b")==0){
    a->miktar=a->miktar/1024;
    strcpy(a->cins,"kb");

}
if(strcmp(a->cins,"bit")==0){
    a->miktar=a->miktar/1024;
    strcpy(a->cins,"b");

}
return *a;


}

int main(){
char girdi[20];
struct kapasite birim;
printf("Kapasite miktar ve cinsini giriniz");
fgets(girdi,sizeof(girdi),stdin);
sscanf(girdi,"%f%s",&birim.miktar,birim.cins);
yukariDonustur(&birim);
printf("bir uste donusmus hali:%.1f %s",birim.miktar,birim.cins);
return 0;
}
