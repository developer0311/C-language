//Write a C program to show maximum number (using switch-case)
#include<stdio.h>
int main (void)
{
	int a,b,max;
	printf("\nEnter two number : ");
	scanf("%d%d",&a,&b);
	(a>b)?(max=1):(max=2);
	
	switch(max)
	{
		case 1:
			printf("\n%d is max.",a);
			break;
		case 2:
			printf("\n%d is max.",b);
			break;
		default:
		printf("\nError!!");
	}
	
	return 0;
}
