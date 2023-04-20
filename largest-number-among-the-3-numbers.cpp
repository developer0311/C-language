//Write a C program to find the largest number among the 3 numbers.

#include <stdio.h>
int main(void) 
{
    int a,b,c;
    printf("\nEnter Three Numbers To Find Greater One : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    	if(b>c)
    		printf("\n%d Is Largest .",a);
    	else
    		printf("\n%d Is Largest .",c);
    else
    	if(b>c)
    		printf("\n%d Is Largest .",b);
    	else
        	printf("\n%d Is Largest .",c);
	return 0;
}
