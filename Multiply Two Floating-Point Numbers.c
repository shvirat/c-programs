// C Program to Multiply Two Floating-Point Numbers
#include<stdio.h>
int main()
{
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    // Calculating Product
    product = a * b;

    printf("Product = %.2lf", product);

    return 0;
}