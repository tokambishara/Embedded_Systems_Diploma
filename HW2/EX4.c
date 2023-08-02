#include<stdio.h>
void main()
{
  int x1;
  printf("Enter number : ");
  scanf("%d",&x1);
	if (x1 < 0)
		{printf("%d is negative ",x1);}
	else if (x1 > 0)
		{printf("%d is Postive ",x1);}
	else if (x1 == 0)
		{printf("You entered zero");}
  
}