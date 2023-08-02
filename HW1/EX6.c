#include<stdio.h>
void main()
{
float a,b,c;
    printf("Please enter number a: ");
	scanf("%f",&a);
	printf("Please enter number b: ");
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping, value of a = %f",a);
	printf("\nAfter swapping, value of b = %f",b);
}