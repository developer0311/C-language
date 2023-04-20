//.Write a C program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main(void)
{
	int a;
	printf("\nEnter A Number To Check Whether It Is Positive , Negative Or Zero : ");
	scanf("%d",&a);
	if (a==0)
		printf("\n%d Is Equal To Zero .",a);
	else
		if(a>0)
			printf("\n%d Is Positive Number .",a);
		else
			printf("\n%d Is Negative Number .",a);
	return 0;
}
