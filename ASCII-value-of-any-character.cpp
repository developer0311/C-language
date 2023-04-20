//.Write a C program to find ASCII value of any character.
#include<stdio.h>
int main(void)
{
	char a;
	printf("\nEnter A Character To Know ASCII Value : ");
	scanf("%c",&a);
	printf("\nASCII Value Of %c Is : %d",a,a);
	return 0;
}
