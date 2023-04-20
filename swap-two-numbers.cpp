//Write a C program to swap two numbers.
#include<stdio.h>
int main(void)
{
	int a,b;
	printf("\nEnter Two Number To Swap : ");
	scanf("%d%d",&a,&b);
	printf("\nBefore Swap Two Numbers : %d & %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swap Two Numbers : %d & %d",a,b);
	return 0;
}
