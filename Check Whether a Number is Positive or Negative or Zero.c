#include <stdio.h>
int main() {
    int num;
    
    printf("Enter your number: ");
    scanf("%d",&num);
    if (num == 0) {
        printf("It's a ZERO.\n");
    }
    // Check if the number is less than zero
    else if (num < 0) {
        printf("It is a NEGATIVE number.\n");
    }
    // If neither, the number is positive
    else {
        printf("It is a POSITIVE number.\n");
    }
    return 0;
}
