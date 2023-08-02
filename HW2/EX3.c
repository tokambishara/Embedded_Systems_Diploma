#include<stdio.h>
void main()
{
  float x1,x2,x3;
  printf("Enter the 3 numbers : ");
  scanf("%f",&x1);
  scanf("%f",&x2);
  scanf("%f",&x3);
  
  for (int j=0 ; j< 6 ; j++)
  {
	if ((x1 > x2) && (x1 > x3))
		{printf("Largest number = %f",x1);
		break;}
	else if ((x2 > x1) && (x2 > x3))
		{printf("Largest number = %f",x2);
		break;}
	else if ((x3 > x1) && (x3 > x2))
		{printf("Largest number = %f",x3);
		break;}
  }
}