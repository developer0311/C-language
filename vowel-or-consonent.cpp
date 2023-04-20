//Write a C program to check whether a given letter  is vowel or consonent.
#include<stdio.h>
int main(void) 
{
	char c;
    printf("\nEnter A Character To Check Vowel Or Consonant : ");
    scanf("%c",&c);
    if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
    	if((c=='a')||(c=='A')||(c=='e')||(c=='E')||(c=='i')||(c=='I')||(c=='o')||(c=='O')||(c=='u')||(c=='U'))
    		printf("\n%c Is A Vowel.",c);
    	else
        	printf("\n%c Is A Consonant.",c);
    else
    	printf("\n%c Is Not An Alphabet !! Try Again !!.",c);
		
	return 0;
}