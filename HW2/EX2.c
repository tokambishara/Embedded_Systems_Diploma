#include<stdio.h>
void main()
{
  char x1;
  printf("Enter the character ");
  scanf("%c",&x1);
  if ( x1  == 'a' || x1  == 'e' || x1  == 'i' || x1  == 'o' || x1  == 'u' ||x1  == 'A' || x1  == 'E' || x1  == 'I' || x1  == 'O' || x1  == 'U' )
  {
	printf("%c is a vowel", x1);
  }
  else 
	printf("%c is a consonant", x1);
}