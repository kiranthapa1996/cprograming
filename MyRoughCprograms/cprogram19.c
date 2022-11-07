//function for all simple mathematical operations:
#include<stdio.h>
#include<stdlib.h>
void alloperations(double num1,double num2,double num3,double num4,double num5)
{
	double num6;
	num6=(num1+num2-num3*num4)/num5;
	printf("value of num1:%f\n",num1);
	printf("value of num2:%f\n",num2);
	printf("value of num3:%f\n",num3);
	printf("value of num4:%f\n",num4);
	printf("value of num5:%f\n",num5);
	printf("total value of the given numbers:%f\n",num6);
}
int main()
{
	alloperations(23,56,78,98,98);
	printf("thank you!visit Again:\n");
	return 0;
}
	
	
