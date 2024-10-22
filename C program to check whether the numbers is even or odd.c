#include <stdio.h>
int main()
{
  int num;
  //Taking input from user
  printf("Enter a number: ");
  scanf("%d", &num);
  //Checking number with if function
  if (num % 2 == 0)
    {printf("Even number\n");}
  else
    {printf("Odd number\n");}
return 0;
}
