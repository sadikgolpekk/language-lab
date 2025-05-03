#include <stdio.h>
struct info{
char *book;
char *writter;
int page;
int year;
};
void yazdir(struct info *a){
 printf("%s \n",a[0].book);
 printf("%s \n",a[0].writter);
 printf("%d \n",a[0].page);
 printf("%d \n",a[0].year);
 printf("\n");
 printf("%s \n",a[1].book);
 printf("%s \n",a[1].writter);
 printf("%d \n",a[1].page);
 printf("%d \n",a[1].year);


}

int main(){
 struct info a[2];
 a[0].book="Programlamayi C ile ogreniyorum";
 a[0].writter="Sadik Golpek";
 a[0].page=632;
 a[0].year=2001;

 a[1].book="Algorithm and Algorithms";
 a[1].writter="Prof.Dr Onur AYDIN";
 a[1].page=1970;
 a[1].year=2024;

yazdir(a);


return 0;
}
