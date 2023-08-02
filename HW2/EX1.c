#include<stdio.h>
void main()
{
  int x1;
  int x2=1;
  printf("Enter the number ");
  scanf("%d",&x1);
  if ( x1 % 2 == 0)
  {
	printf("the number is even");
  }
  else 
	printf("the number is odd");
}