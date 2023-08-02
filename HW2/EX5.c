#include<stdio.h>
void main()
{
  char x1 ;
  int i,j;
 printf("Enter the character : ");
 scanf("%c",&x1);
  for ( i = 0 ; i < 26 ; i++)
  {
      if (x1 == i+97)
      	{
      	    printf("%c is an alphapet ",x1);
      	    break;
      	}

  }
 for ( j = 0 ; j < 26 ; j++)
  {
      if (x1 == j+65)
      	{
      	    printf("%c is an alphapet ",x1);
      	    break;
      	}
  }
  
	if (i == 26 && j==26)
		{printf("%c is not an alphapet ",x1);}

}