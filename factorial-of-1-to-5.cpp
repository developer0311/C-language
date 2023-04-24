//Write a C program to create a chart of factorial of 1 to 5 .
#include<stdio.h>
int main (void)
{
	int i=1,j,fact=1;
	while(i<=5)
	{
		for(j=1;j<=i;j++)
			fact*=j;
		printf("\nFactorial of %d is : %d",i,fact);
		fact=1;
		i++;
	}
	
	return 0;
}
