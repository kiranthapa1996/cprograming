//program to calculate the monthly salary of the employees:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	double sp,total_salary;
	int twh,working_days;
	printf("salary per hour:");
	scanf("%lf",&sp);
	printf("Total work hour per day:");
	scanf("%d",&twh);
	printf("Number of working days:");
	scanf("%d",&working_days);
	total_salary=(sp*twh)*working_days;
	printf("Total salary of the employee working %d hour/day for %d days is:%.2f\n\n",twh,working_days,total_salary);
	return 0;
}
	
