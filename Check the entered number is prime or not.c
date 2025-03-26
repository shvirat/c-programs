//C program to check whether the entered number is prime or not
#include <stdio.h>
int main()
{
	int n;
	int flag=1;
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	for(int i=2;i*i<n;i++)
		{if(n%i==0)
		{flag=0;}}
	if(flag)
		printf("%d is a prime number.",n);
	else
		printf("%d is not a prime number.",n);
	return 0;
}
