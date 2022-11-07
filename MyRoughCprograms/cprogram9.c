#include<stdio.h>
#include<stdlib.h>
int main()
{
	double num1;
	double num2;
	double num3;
	printf("Enter the first number:\n");
	scanf("%lf",&num1);
	printf("Enter the second number:\n");
	scanf("%lf",&num2);
	num3=num1+num2;
	printf("Answer of two number is:%f",num3);
	return 0;
}
