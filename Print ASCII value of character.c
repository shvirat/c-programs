//Print ASCII value of entered character
#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    printf("The ASCII value of %c is %d", c, c);
    return 0;
}
