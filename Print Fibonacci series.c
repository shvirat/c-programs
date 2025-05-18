//C program to print the Fibonacci series
#include <stdio.h>
int main ()
{
	int n,a=0,b=1,f;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	f=a+b;
//Initiating first two terms with 0,1,
	printf("Fibonacci Series: %d %d ",a,b);
	for(int i=3;i<=n;i++)
		{printf("%d ",f);
		a=b;
		b=f;
		f=a+b;
		}
	return 0;
}
