//Write a C program to swap two numbers using third variable.
#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("\nEnter two numbers to swap : ");
	scanf("%d%d",&a,&b);
	printf("\nBefore swap two numbers are : %d, %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter swap two numbers are : %d, %d",a,b);
	return 0;
}
