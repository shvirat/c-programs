//C program tells whether a given year is a leap year or not
#include <stdio.h>
int main()
{
	int year;
	printf("enter year :");
	scanf("%d",&year);
//Logic here with conditions
	if((year%400 == 0) || ((year%4 == 0) && (year%100 != 0)))
	{
		printf("%d is a leap year",year);
	}
	else 
	{
		printf("%d is not a leap year",year);
	}
	return 0;
}
