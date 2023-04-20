//Write a C program to check whether a given character is alphabet or not.

#include <stdio.h>
int main(void) 
{
    char c;
    printf("\nEnter A Character To Check Alphabet Or Not : ");
    scanf("%c",&c);
    if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
    	printf("\n%c Is An Alphabet.",c);
    else
        printf("\n%c Is Not An Alphabet.",c);
    return 0;
}
