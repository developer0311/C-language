/*Write a c program to calculate grade according to the marks using if-else
if (marks< 50) : E ; if (marks>=50)&&(marks<60) : D ; if (marks>=60)&&(marks<70) : c ; if (marks>=70)&&(marks<80) : B  ;  if (marks>=80)&&(marks<90) : A   ;  if (marks>=90) : A+*/


#include<stdio.h>
int main(void)
{
	int marks;
	printf("\nEnter your marks to check your Grade : ");
	scanf("%d",&marks);
	if(marks<0)
		printf("\nNegative marks is not allowed .");
	else if((marks>=0)&&(marks<50))
		printf("\nYou got grade E .");
	else if((marks>=50)&&(marks<60))
		printf("\nYou got grade D .");
	else if((marks>=60)&&(marks<70))
		printf("\nYou got grade C .");
	else if((marks>=70)&&(marks<80))
		printf("\nYou got grade B .");
	else if((marks>=80)&&(marks<90))
		printf("\nYou got grade A .");
	else if((marks>=90)&&(marks<=100))
		printf("\nYou got grade A+ .");
	else if(marks>100)
		printf("\nEnter The Number between 0 and 100 .");
	else
		printf("\nPlease Enter valid number !!");
	return 0;
}
