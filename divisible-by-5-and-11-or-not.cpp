//Write a C program to check wether a number is divisible by 5 and 11 or not .
#include<stdio.h>
int main(void)
{
	int num;
	printf("\nEnter a number to check either divisible by both 5 and 11 or not : ");
	scanf("%d",&num);
	if((num%5==0)&&(num%11==0))
		printf("\n%d is divisible by both 5 and 11 .",num);
	else
		printf("\n%d is not divisible by 5 and 11 .",num);
	return 0;
}
