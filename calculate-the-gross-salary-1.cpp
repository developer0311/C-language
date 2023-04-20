/*Write a C program to input basic salary of an employee and calculate the gross salary according to given conditions:-
1. 	Basic salary<= 10000; 
   	HRA =20%
   	DA = 80%
2. 	Basic salary is between 10001 to 20,000; 
	HRA =25%
	DA = 90%

3. 	Basic salary>=20001
	HRA = 30%
	DA = 95%  */

#include<stdio.h>
int main(void)
{
	float gross_salary,basic_salary,da,hra;
  	printf("\nEnter Basic salary of an employee : ");
   	scanf("%f",&basic_salary);
   	if (basic_salary<=10000)
   	{
   		hra = (20 * basic_salary) / 100;
    	da = (80 * basic_salary) / 100;
    	gross_salary = basic_salary + hra + da;
    	printf("\nGross salary of the employee : %0.2f",gross_salary);
   	}
   	else if((basic_salary>10001)&&(basic_salary<=20000))
   	{
   		hra = (25 * basic_salary) / 100;
    	da = (90 * basic_salary) / 100;
    	gross_salary = basic_salary + hra + da;
    	printf("\nGross salary of the employee : %0.2f",gross_salary);
	}
	else if(basic_salary>=20001)
	{
		hra = (30 * basic_salary) / 100;
    	da = (95 * basic_salary) / 100;
    	gross_salary = basic_salary + hra + da;
    	printf("\nGross salary of the employee : %0.2f",gross_salary);
	}
   	return 0;
}
