#include <stdio.h>

int main()
{
    char ch;
    
    printf("Enter an english character: ");
    scanf("%c",&ch);
    
    // Checking if the character ch is a vowel or not.
    
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
        || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
        || ch == 'u' || ch == 'U') {
 
        printf("The character %c is a vowel.\n", ch);
    }
    else {
        printf("The character %c is a consonant.\n", ch);
    }
 
    return 0;
}
