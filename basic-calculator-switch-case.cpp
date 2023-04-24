//Write a C program to design calculator with basic operation using switch case.
#include<stdio.h>
int main(void)
{
	char operation;
	float a,b,c;
	printf("\nEnter what operation you want do ['+','-','*','/'] : ");
	scanf("%c",&operation);
	printf("\nEnter First operand : ");
	scanf("%f",&a);
	printf("Enter Second operand : ");
	scanf("%f",&b);
	switch(operation)
	{
		case '+':
			c=a+b;
			break;
		case '-' :
			c=a-b;
			break;
		case '*':
			c=a*b;
			break;
		case '/':
			c=a/b;
			break;
		default :
			printf("\nEnter Valid Inputs .");
	}
	printf("\n%0.2f %c %0.2f : %0.2f",a,operation,b,c);
	return 0;
}
