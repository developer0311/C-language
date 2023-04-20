//Write a c program to calculate the average of three numbers .
#include<stdio.h>
int main(void)
{
	float num_1,num_2,num_3;
	printf("\nEnter three numbers to calculate their avarage : ");
	scanf("%f%f%f",&num_1,&num_2,&num_3);
	printf("\nAvarage of given numbers : %0.2f",(num_1+num_2+num_3)/3);
	return 0;
}
