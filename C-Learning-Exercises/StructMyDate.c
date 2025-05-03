#include<stdio.h>
#include<math.h>
struct MyDate{
int day;
int month;
int year;
};
int main(){
struct MyDate x;
struct MyDate y;
printf("Enter your date of birth:");
scanf("%d%d%d",&x.day,&x.month,&x.year);
printf("Enter today's date:");
scanf("%d%d%d",&y.day,&y.month,&y.year);

if(x.day>y.day){
    y.day+=30;
    y.month--;
}
if(x.month>y.month){
    y.month+=12;
    y.year--;
}

printf("\n You have lived\n");
printf("%d year %d month %d day ",y.year-x.year,y.month-x.month,y.day-x.day);
printf("until now");

return 0;
}
