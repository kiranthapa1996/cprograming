//return statement:
#include<stdio.h>
#include<stdlib.h>
double numbers(double num1,double num2)
{	
	double num3;
	num3=num1*num2;
	printf("value of num1:%f\n",num1);
	printf("value of num2:%f\n",num2);
	return num3;
}
int main()
{
	double result = numbers(30,45);
	printf("value after multiplication :%f\n", result);
	return 0;
}
