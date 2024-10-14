#include<stdio.h>
 int main(){
 	int a,i,sum=0;
 	printf("enter a number");
  	scanf("%d",&a);
  	for(i=0; i<=a;i++){
  		sum=sum+i;
	  }
	  printf("sum of digits %d",sum);
 }
