//Write a C program to check armstrong number .
#include<stdio.h>
#include<math.h>
int main(void)
{
	int num,real_num,a,power=0,result=0;
	printf("\nEnter a number to check armstrong number : ");
	scanf("%d",&num);
	real_num=num;
	
	while(real_num>0)
	{
		power++;
		real_num/=10;
	}
	
	real_num=num;
	//printf("%d",power);
	
	while(real_num>0)
	{
		a=real_num%10;
		result+= pow(a,power);
		real_num/=10;
	}
	if(result==num)
		printf("\n%d is an Armstrong number .",num);
	else
		printf("\n%d is not an Armstrong number .",num);
	return 0;
}
