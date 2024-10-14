#include<stdio.h>
 int main(){
 	int a,i;
 	printf("enter a number");
  	scanf("%d",&a);
       while(a!=0){
       	int r=a%10;
       	 printf("%d",r);
       	 a=a/10;
	   }
   
 }
