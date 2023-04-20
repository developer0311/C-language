//Write a C program to convert temperature from Celcious to Fahrenheit .
#include<stdio.h>
int main(void)
{
	float f,c;
	printf("\nEnter Temparature in Celcious : ");
	scanf("%f",&c);
	f=(1.8*c)+32;
	printf("\n%0.2f Degree Celsious = %0.2f Degree Fahrenheit .",c,f);
	return 0;
}
