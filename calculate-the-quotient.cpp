//Write a C program to divide one number by other and find the Quotient.
#include<stdio.h>
int main(void)
{
	float a,b;
	printf("\nEnter the Dividend : ");
	scanf("%f",&a);
	printf("Enter the Divisor : ");
	scanf("%f",&b);
	printf("\nDesired answer is : %0.2f",a/b);
	return 0;
}
