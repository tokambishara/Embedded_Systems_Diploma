#include<stdio.h>
void main()
{
  int x2;
  int fact =1;
  printf("Enter the number ");
  scanf("%d",&x2);
  if (x2 < 0)
	  printf("ERROR !!! Factorial of negative number doesnt exist");
  else {
  do
  {
      fact=fact * x2;
      x2--;
  }while (x2 >= 1);
        printf("Factorial = %d ",fact);
  }

}