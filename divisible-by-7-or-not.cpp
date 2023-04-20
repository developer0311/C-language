//Write a C program to check wether a number is divisible by 7 or not .
#include<stdio.h>
int main(void)
{
	int num;
	printf("\nEnter a number to check either divisible by 7 or not : ");
	scanf("%d",&num);
	if(num%7==0)
		printf("\n%d is divisible by 7 .",num);
	else
		printf("\n%d is not divisible by 7 .",num);
	return 0;
}
