//simple calculator:
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double num1,num2,num3,num4;
	printf("num1:\n");
	scanf("%lf",&num1);
	printf("num2:\n");
	scanf("%lf",&num2);
	printf("num3:\n");
	scanf("%lf",&num3);
	num4=(num1+num2)-num3;
	printf("Answer:%f",num4);
}
