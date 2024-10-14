#include<stdio.h>
  int main(){
  	int a,i,f=1;
  	printf("enter a number");
  	scanf("%d",&a);
  	for(i=1; i<=a;i++){
  		f=f*i;
	  }
	  printf("fatorial %d",f);
  }
