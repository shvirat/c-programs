#include <stdio.h>
int main()
{
    int table, num, mul;
 
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter count of table (Usually 10): ");
    scanf("%d", &table);
 
    // For loop to calculate the Multiplication table.
    for (int i = 1; i <= table; i++) {
        // To store the product.
        mul = num * i;
 
        // Printing the Multiplication Table.
        printf("%d * %d = %d", num, i, mul);
 
        printf("\n");
    }
 
    return 0;
}
