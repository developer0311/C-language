//Write a C program to read weekday number and print weekday name .
#include<stdio.h>
int main(void)
{
	char week_day;
	printf("Enter weekday number : ");
	scanf("%c",&week_day);
	switch(week_day)
	{
		case '1':
			printf("\n%cst day is Sunday .",week_day);
			break;
		case '2':
			printf("\n%cnd day is Monday .",week_day);
			break;
		case '3':
			printf("\n%crd day is Tuesday .",week_day);
			break;
		case '4':
			printf("\n%cth day is Wednesday .",week_day);
			break;
		case '5':
			printf("\n%cth day is Thursday .",week_day);
			break;
		case '6':
			printf("\n%cth day is Friday .",week_day);
			break;
		case '7':
			printf("\n%cth day is Saturday .",week_day);
			break;
		default :
			printf("\nPlease enter valid input .");
	}
	return 0;
}
