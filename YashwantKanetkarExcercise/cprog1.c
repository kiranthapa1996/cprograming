//program to find out the gross salary of a user:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	float basic_salary,dearness_allowance,home_allowance,gross_salary;
	printf("Enter the basic salary:");
	scanf("%f",&basic_salary);
	dearness_allowance=(0.4)*basic_salary;
	home_allowance=(0.2)*basic_salary;
	gross_salary=(basic_salary+dearness_allowance+home_allowance);
	printf("your gross salary:%f\n\n",gross_salary);
	return 0;
}
