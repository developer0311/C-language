//Write a C program to check whether a given number is even or odd.

#include<stdio.h>
int main(void)
{
	int a;
	printf("\nEnter A Number To Check Whether It Is Even Or Odd : ");
	scanf("%d",&a);
	if(a==0)
		printf("\n%d Is Neither Even Nor Odd Number .",a);
	else	
		if (a%2==0)
			printf("\n%d Is Even Number .",a);
		else
			printf("\n%d Is Odd Number .",a);
	return 0;
}
