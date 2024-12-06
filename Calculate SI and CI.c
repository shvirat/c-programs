#include <stdio.h>
#include <math.h>
int main(){
    float Principle, Rate, Time, amount,SimpleInterest,CompoundInterest;
    printf("Enter Principle=");
    scanf("%f", &Principle);
    printf("Enter Rate=");
    scanf("%f", &Rate);
    printf("Enter Time=");
    scanf("%f", &Time);
    SimpleInterest = Principle*Rate*Time/100;
    amount = Principle * pow((1 + (Rate/100)), Time);
    CompoundInterest = amount - Principle;
    printf("Simple Interest=%f\n", SimpleInterest);
    printf("Compound Interest=%f\n", CompoundInterest);
    return 0;
    }
