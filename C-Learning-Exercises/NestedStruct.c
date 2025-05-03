#include <stdio.h>
#include <string.h>
struct ogrenci{
int not;
char name[20];
};
struct ogretmen{
char name2[20];
struct ogrenci a;
};
void yazdir(struct ogretmen adam){

printf("Ogretmen adi:%s\n",adam.name2);
printf("Ogrenci adi ve numarasi ise %s %d",adam.a.name,adam.a.not);

}
int main(){

  struct ogretmen adam;
  printf("Ogrenci adini giriniz:");
  scanf("%s",adam.a.name);
  printf("\nOgrenci notunu giriniz:");
  scanf("%d",&adam.a.not);
  printf("\nOgretmen adini giriniz");
  scanf("%s",adam.name2);
  yazdir(adam);
return 0;
}
