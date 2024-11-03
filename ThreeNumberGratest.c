#include <stdio.h>
 
int main()
{
     printf("find three gratest number using ternary operator \n");
    int n1, n2, n3, max;
     printf("Enter Three number: ");
    scanf("%d %d %d", &n1, &n2,&n3);  
   
    max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
     
   
    printf("Largest number among %d, %d and %d is %d.", n1, n2, n3, max);
 
    return 0;
}
