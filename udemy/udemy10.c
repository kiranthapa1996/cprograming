//program to know the birth year of the user

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int birth_year,current_year,age;
	printf("enter current year:");
	scanf("%d",&current_year);
	printf("enter your age:");
	scanf("%d",&age);
	birth_year=current_year-age;
	printf("your Birth year is:%d\n\n",birth_year);
	return 0;
	
	
