//Write a C program to check whether a given year is leap year or not.

#include<stdio.h>
int main(void)
{
   int year;
   printf("Enter A Year To Check Either It Is Leap Year Or Not : ");
   scanf("%d",&year);
   if (year%400==0)
   {
      printf("\n%d Is A Leap Year .",year);
   }
   else if (year%100==0)
   {
      printf("\n%d Is Not A Leap Year .",year);
   }
   else if (year%4==0)
   {
      printf("\n%d Is A Leap Year .",year);
   }
   else
   {
      printf("\n%d Is Not A Leap Year .",year);
   }
   return 0;
}
