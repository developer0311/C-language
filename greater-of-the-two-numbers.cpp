//.Write a C program to find greater of the two numbers.

#include <stdio.h>
int main(void) 
{
    int a,b;
    printf("\nEnter Two Numbers To Find Greater One : ");
    scanf("%d%d",&a,&b);
    if (a>b)
    	printf("\n%d Is Greater Than %d .",a,b);
    else
        printf("\n%d Is Greater Than %d .",b,a);
	return 0;
}
