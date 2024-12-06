#include<stdio.h>
int main()
{
    float rad, area, circum;
    const float pi=3.14;
    printf("Enter radius=");
    scanf("%f", &rad);
    area=pi*rad*rad;
    circum=2*pi*rad;
    printf("Area of Circle=%.2f\nAnd circumference of Circle=%.2f",area, circum);
    return 0;
}
