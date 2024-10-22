#include<stdio.h>  
int main()    
{
  int a,b;
  //Taking user input
  printf("Enter a number(A): ");
  scanf("%d",&a);
  printf("Enter a number(B): ");
  scanf("%d",&b);
  //Doing calculations
  a=a+b;
  b=a-b;
  a=a-b;

  printf("After swap A=%d B=%d",a,b);    
  return 0;  
}   
