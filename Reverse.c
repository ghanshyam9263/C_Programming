#include <stdio.h>
int main() {
  int n,i;
  printf("Enter an integer: ");
  scanf("%d", &n);

  for (i = 10; i >= 1; i--) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}
