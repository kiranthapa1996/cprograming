//using of function:
#include<stdio.h>
#include<stdlib.h>
void numerical()
{
	double num1,num2,num3;
	printf("enter the value of num1:\n");
	scanf("%lf",&num1);
	printf("enter the value of num2:\n");
	scanf("%lf",&num2);
	num3=num2*num1;
	printf("value of your given numbers:%f\n",num3);
}
int main()
{
	numerical();
	printf("Thank you for using!\n");
	return 0;
}
	
