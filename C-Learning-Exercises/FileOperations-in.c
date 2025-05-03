#include <stdio.h>
#include <stdlib.h>

int main() {
  int x=5;
  FILE *fptr; // File turunden bir pointer tanımla.
  char data[60];
  int numbers[7];
  fptr=fopen("C:\\Users\\HP\\hadibakalim.txt","w"); // Dosya yolunu belirt sanırsam Turkce karakterlere duyarli :(
  if( fptr==NULL){
    printf("File open unsuccesful");
  }
  else{
    printf("Enter a sentence:");
    gets(data);
    fprintf(fptr,"%s\n",data); // fprintf kullanarak(fileprintf) dosyana yazdir.
    putc('a',fptr); // Tek harf yazdirmak icin
    fprintf(fptr,"\nI do love C programming %d\n",x);
    fputs("C is an interesting language",fptr); // Formatsiz yazdirmak icin kullan
    printf("Data was written to file successful");
  }
  fclose(fptr);
    return 0;
}
