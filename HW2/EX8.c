#include<stdio.h>
void main()
{
	char op;
	float a,b;
	float sum,sub,mul,div;
    printf("Enter the operator whether + or - or * or / : ");
	scanf("%c",&op);
	printf("Enter two operands : ");
	scanf("%f",&a);
	scanf("%f",&b);
	if (op == '+')
	    {
	        sum = a + b ;
	        printf("a + b = %0.2f",sum);
	    }
	else if (op == '-')
	{
        sub = a - b ;
        printf("a - b = %0.2f",sub);
	}
    else if (op == '*')
    {
        mul = a * b ;
        	printf("a * b = %0.2f",mul);
    }
    else if (op == '/')
    {
        div = a / b ;
        printf("a / b = %0.2f",div);
    }
}