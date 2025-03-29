//C program that can find the factorial of a given number
#include <stdio.h>
int main()
{
	int n,fl=1;
	printf("Enter an integer: ");
	scanf("%d",&n);
	if(n>0)
		{for(int i=1;i<=n;i++)
			{fl *= i;}
			printf("Factorial of %d = %d",n,fl);
			}
	else
	printf("Error! Factorial of a negative number doesn't exist.");
	return 0;
}
