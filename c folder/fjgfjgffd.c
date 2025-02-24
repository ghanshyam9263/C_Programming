#include <stdio.h>
long long modExp(long long a, long long b, long long c) {
    if (b == 0) {
        return 1;
    }
    a = a % c;
    if (a < 0) {
        a += c; 
    }

   
    long long half = modExp(a, b / 2, c); 
    half = (half * half) % c; 

  
    if (b % 2 != 0) {
        half = (half * a) % c;
    }

    return half;
}

int main() {
    long long a, b, c;


    printf("Enter values for a, b, c:\n");
    printf("a = ");
    scanf("%lld", &a);
    printf("b = ");
    scanf("%lld", &b);
    printf("c = ");
    scanf("%lld", &c);

   
    long long result = modExp(a, b, c);

   
    printf("Result: %lld\n", result);

    return 0;
}
