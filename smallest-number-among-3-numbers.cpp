//Write a C program to find smallest among three numbers.
#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("\nEnter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
		if(b<c)
			printf("\n%d is smallest.",a);
		else
			if(a<c)
				printf("\n%d is smallest.",a);
			else
				printf("\n%d is smallest.",c);
	else
		if(b<c)
			printf("\n%d is smallest.",b);
		else
			printf("\n%d is smallest.",c);
	return 0;		
}
