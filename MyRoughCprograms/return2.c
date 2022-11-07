//use of prototype in return statements:
#include<stdio.h>
#include<stdlib.h>
double addition(double num1,double num2);
int main()
{
	double result=addition(34,98);
	return 0;
}
double addition(double num1,double num2)
{
	double num3;
	num3=num1+num2;
	printf("value of num1:%f\n",num1);
	printf("value of num2:%f\n",num2);
	return num3;
}
