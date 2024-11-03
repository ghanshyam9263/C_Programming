#include <stdio.h>

#define PI 3.14f 

void main() {
 
  float radius, perimeter, area;

  
  printf("Enter radius of the Circle:\n");
  scanf("%f", & radius);

  
  perimeter = 2 * PI * radius;
  printf("Perimeter of the circle: %0.4f\n", perimeter);

  
  area = PI * radius * radius;
  printf("Area of circle: %0.4f\n", area);
}
