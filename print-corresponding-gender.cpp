//Write a C program to read gender (M/F) and print corresponding gender .
#include<stdio.h>
int main(void)
{
	char name[30],gender;
	printf("Enter your gender ['M','F','O'] : ");
	scanf("%c",&gender);
	printf("\nEnter your name : ");
	scanf("%s",name);
	
	switch(gender)
	{
		case 'm':
		case 'M':
			printf("\n%s is male .",name);
			break;
		case 'f':
		case 'F':
			printf("\n%s is female .",name);
			break;
		case 'o':
		case 'O':
			printf("\n%s is others .",name);
			break;
		default :
			printf("\nPlease enter Valid Inputs .");
	}
	
	return 0;
}
