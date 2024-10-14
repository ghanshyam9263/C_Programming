#include<stdio.h>
 int main(){
 		int n,i;
 		int   remainder,revers; 
 	printf("enter a number");
  	scanf("%d",&n);
  	 int original=0; 
        while (n != 0) {
        remainder = n % 10;
        revers = revers * 10 + remainder;
        n /= 10;
    }
     
    // palindrome if orignal and reversed are equal
    if (original == revers)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
	   }
	   
 
