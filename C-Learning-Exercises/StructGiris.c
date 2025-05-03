#include<stdio.h>
struct students{
char MyLetter;
char *name;
char *lastname;
int no;
float score;
};

int main(){
struct students x1;
struct students x2;
x1.MyLetter='S';
x1.name="Sadik";
x1.lastname="Golpek";
x1.no=230;
x1.score=98.67;

x2.MyLetter='B';
x2.name="Burak";
x2.lastname="Demir";
x2.no=257;
x2.score=78.41;

printf("Myletter:%c\n",x1.MyLetter);
printf("Name:%s\n",x1.name);
printf("Surname:%s\n",x1.lastname);
printf("No:%d\n",x1.no);
printf("Score:%.2f\n",x1.score);
printf("-------------\n");
printf("Myletter:%c\n",x2.MyLetter);
printf("Name:%s\n",x2.name);
printf("Surname:%s\n",x2.lastname);
printf("No:%d\n",x2.no);
printf("Score:%.2f\n",x2.score);
return 0;
}
