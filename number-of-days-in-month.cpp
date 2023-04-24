//Write a C programm to find number of days in a month.

#include<stdio.h>
int main(void)
{
	int year,num;	
	printf("\nEnter year : ");
	scanf("%d",&year);
	printf("Enter the month number which number of day you want to know[Example : Enter 1 for 'January'] : ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("\nJanuary has 31 days in the year %d.",year);
			break;
			
		case 2:
			if(year%400)
				printf("February has 29 days in the year %d.",year);
			else if(year%100)
				printf("February has 28 days in the year %d.",year);
			else if(year%4)
				printf("February has 29 days in the year %d .",year);
			break;
			
		case 3:
			printf("\nMarch has 31 days in the year %d.",year);
			break;
			
		case 4:
			printf("\nApril has 30 days in the year %d.",year);
			break;
			
		case 5:
			printf("\nMay has 31 days in the year %d.",year);
			break;
			
		case 6:
			printf("\nJune has 30 days in the year %d.",year);
			break;
			
		case 7:
			printf("\nJuly has 31 days in the year %d.",year);
			break;
			
		case 8:
			printf("\nAugust has 31 days in the year %d.",year);
			break;
			
		case 9:
			printf("\nSeptember has 30 days in the year %d.",year);
			break;
			
		case 10:
			printf("\nOctober has 31 days in the year %d.",year);
			break;
			
		case 11:
			printf("\nNovember has 31 days in the year %d.",year);
			break;
			
		case 12:
			printf("\nDecember has 31 days in the year %d.",year);
			break;
			
		default :
			printf("\nEnter valid inputs !!");
	}
	return 0;
}
