//Write a C program to substract one number from the other.
#include<stdio.h>
int main(void)
{
	int a,b;
	printf("\nEnter Two Number To Substract : ");
	scanf("%d%d",&a,&b);
	printf("\n%d - %d : %d",a,b,a-b);
	return 0;
}
