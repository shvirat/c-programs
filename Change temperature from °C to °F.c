#include <stdio.h>
int main()
{
    float c,f;
    //Input data from user
    printf("Enter temperature in Centigrade standard= ");
    scanf("%f",&c);
    //Calculating result
    f = c*9/5 + 32;
    printf("Temperature in Fahrenheit=%.2f",f);
    return 0;
}
