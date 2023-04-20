//Write a C program to make a simple calculator.
#include<stdio.h>
int main(void)
{
	int a,b;
	printf("\nEnter Two Oparands : ");
	scanf("%d%d",&a,&b);
	printf("\n%d + %d : %d",a,b,a+b);
	printf("\n%d - %d : %d",a,b,a-b);
	printf("\n%d X %d : %d",a,b,a*b);
	printf("\n%d / %d : %d",a,b,a/b);
	return 0;
}
