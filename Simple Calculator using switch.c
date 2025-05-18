// C Program to make a Simple Calculator using switch-case statements
#include <stdio.h>
#include <float.h>
int main() {
    char op;
    double a, b, res;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);
    
// Define all four operations in the corresponding switch-case
    switch (op) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
         res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        printf("Error! Incorrect Operator Value\n");
        res = 'e';
    }
    if(res!='e')
      printf("Result is %.2lf", res);
    
    return 0;
}
