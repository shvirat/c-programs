#include <stdio.h>
 int main()
{
    float l,b;
    printf("Enter length of rectangle: ");
    scanf("%f",&l);
    
    printf("Enter breadth of rectangle: ");
    scanf("%f",&b);
  
    printf("Area of rectangle is: %.2f", l * b);
    printf("\nPerimeter of rectangle is: %.2f", 2 * (l + b));
    return 0;
}
