#include <stdio.h>
struct nokta{
int x;
int y;
};

int main(){
struct nokta c;
struct nokta *cptr; // Pointer definition

c.x=3;
c.y=4;
cptr=&c; 
printf("%d ",c.x); 
printf("%d \n",c.y);
printf("%d ",(*cptr).x); // Dot operator 
printf("%d \n",(*cptr).y);
printf("%d ",cptr->x); // Arrow operator(with pointers)
printf("%d \n",cptr->y);

return 0;
}
