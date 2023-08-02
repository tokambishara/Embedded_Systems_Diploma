#include<stdio.h>
void main()
{
  int x1 ;
  int sum = 0;
 printf("Enter the number : ");
 scanf("%d",&x1);
  for ( int i = 1 ; i <= x1 ; i++)
  {
      sum = sum +i;
  }
   printf("Sum = %d ",sum);

}