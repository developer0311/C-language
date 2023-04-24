//Write a C program to create a chart of factorial of 1 to n .
#include<stdio.h>
int main (void)
{
	int num,i=1,j,fact=1;
	printf("\nEnter the number upto which you want to get factorial : ");
	scanf("%d",&num);
	while(i<=num)
	{
		for(j=1;j<=i;j++)
			fact*=j;
		printf("\nFactorial of %d is : %d",i,fact);
		fact=1;
		i++;
	}
	
	return 0;
}
