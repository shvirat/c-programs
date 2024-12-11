#include <stdio.h>

int main()
{
    int a, b, temp;
    // Getting input of two numbers from user
    printf("Enter two numbers (A and B): ");
    scanf("%d\n%d",&a,&b);
    
    // Swapping values of a and  b
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: A = %d, B = %d\n", a, b);
    return 0;
}
