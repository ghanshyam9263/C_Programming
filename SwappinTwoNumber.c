#include<stdio.h>
int main()
{
int x, y,z;
printf("Input value for x & y: \n");
scanf("%d%d",&x,&y);
printf("Before swapping the value of x & y: %d %d",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("\nAfter swapping without the value of x & y: %d %d",x,y);

    z = x;
    x = y;
    y = z;
    
   printf("\nAfter swapping without the value of x & y: %d %d",x,y);
return 0;
}
