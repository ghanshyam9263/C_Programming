
#include <stdio.h>

int main(){
int income;

float tax;

printf("enter the income:");

scanf("%d",&income);

switch(income)

{

case 0 ...100000:

tax = income * 0;

printf("the taxable amount for income is %f", tax);

break;

case 100001 ...150000 :

tax = ((income - 100000)*0.1)+0;

printf("the taxable amount for the income is %f", tax);

break;

case 150001 ...250000:

tax=(((income -150000)*0.2) + 5000+ (50000 *0.1) + 0);

printf("the taxable amount for the income is %f", tax);

break;

default:

tax = ((((income -250000)*0*3)+25000)+((100000*0.2)+5000)+(50000*0.1)+0);

printf("the taxable amount for the income is %f", tax);
}
return 0;
}
