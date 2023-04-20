//Write a C program to find out whether an integar is greater than 100 or less than 100.
#include<stdio.h>
int main(void)
{
	int a;
	printf("\nEnter An Integar To Check Greater Than 100 Or Less Than 100 : ");
	scanf("%d",&a);
	if (a==100)
		printf("\n%d Is Equal To 100",a);
	else
		if(a>100)
			printf("\n%d Is Greater Than 100",a);
		else
			printf("\n%d Is Less Than 100",a);
	return 0;
}
