#include<stdio.h>
 int main(){
 	int a,i,sum=0;
 	printf("enter a number");
  	scanf("%d",&a);
  	for(i=0; i<=a;i+=2){
  		sum=sum+i;
	  }
	  printf("sum of even number %d",sum);
 }
