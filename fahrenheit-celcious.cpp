//Write a c program to convert temperature from Fahrenheit to Celcius .
#include<stdio.h>
int main(void)
{
	float f,c;
	printf("\nEnter Temparature in Fahrenheit : ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("\n%0.2f Degree Fahrenheit = %0.2f Degree Celsious .",f,c);
	return 0;
}
