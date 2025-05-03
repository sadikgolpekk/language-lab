#include <stdio.h>
#include <stdlib.h>

int main() {
FILE *outfile,*infile;
int b=5,f;
float a=13.72,c=6.68,e,g;
outfile=fopen("C:\\Users\\HP\\hadibakalim.txt","w");
fprintf(outfile," %f %d %f ",a,b,c); // Dosya icine yazma
fclose(outfile);
infile=fopen("C:\\Users\\HP\\hadibakalim.txt","r");
fscanf(infile,"%f %d %f",&e,&f,&g); // Dosya icine okuma
printf(" %f %d %f \n",e,f,g); // Okuyup yazma
return 0;
}
