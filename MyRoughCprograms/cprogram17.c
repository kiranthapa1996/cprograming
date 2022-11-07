//function for subtraction:
#include<stdio.h>
#include<stdlib.h>
void subtraction(double num1,double num2)
{	
	double num3;
	num3=num2-num1;
	printf("value of num2:%f\n",num2);
	printf("value of num1:%f\n",num1);
	printf("final subtraction value of your numbers:%f\n",num3);
}
int main()
{
	subtraction(65,78.98);
	return 0;
}	
