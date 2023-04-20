//Write a c program to calculate product of first 10 natural number .
#include<stdio.h>
int main(void)
{
	int i,p=1;
	for(i=1;i<=10;i++)
		p=p*i;
	printf("\nProduct of first 10 natural number : %d\n",p);
	
	return 0;
}
