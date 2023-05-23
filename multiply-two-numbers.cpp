//Write a C program to multiply two numbers.
#include<stdio.h>
int main(void)
{
	float a,b;
	printf("\nEnter two numbers for multiply : ");
	scanf("%f%f",&a,&b);
	printf("\n%0.2f X %0.2f : %0.2f",a,b,a*b);
	return 0;
}
