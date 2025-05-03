#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
char *p_dizi;
p_dizi=(char*)malloc(5*sizeof(char));
strcpy(p_dizi,"test");
printf("%S\n\n",p_dizi);

p_dizi=realloc(p_dizi,100*sizeof(char));
strcat(p_dizi,"12345678912345678");
printf("%s\n",p_dizi);
printf("stringin boyutu %d\n",strlen(p_dizi));
printf("Bellegin boyutu 100\n\n");

int karaktersayisi=strlen(p_dizi)+1;
p_dizi=realloc(p_dizi,karaktersayisi*sizeof(char));
printf("%s\n",p_dizi);
printf("Stringin boyutu: %d\n",strlen(p_dizi));
printf("bellegin boyutu: %d\n",strlen(p_dizi)+1);
free(p_dizi);
return 0;
}
