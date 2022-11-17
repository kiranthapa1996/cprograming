//Program to find out the birth age from user:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int initial_year,present_year,age;
	printf("enter the Birth year:");
	scanf("%d",&initial_year);
	printf("enter the present year:");
	scanf("%d",&present_year);
	age=initial_year-present_year;
	printf("your age is:%d\n\n",age);
	return 0;
}
