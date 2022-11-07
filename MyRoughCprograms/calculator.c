// program to make calculator:
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double num1;
	double num2;
	char op;
	printf("Enter the value of num1:\n");
	scanf("%lf",&num1);
	printf("Enter the operator:\n");
	scanf("%s",&op);
	printf("Enter the value of num2:\n");
	scanf("%lf",&num2);
	
	if(op=='+')
		{
			printf("value of two nos. after addition:%f\n",num1+num2);
		}
	else if(op=='-')
		{
			printf("value of two nos. after substraction:%f\n",num1-num2);
		}
	else if(op=='*')
		{	
			printf("value of two nos. after multiplication:%f\n",num1*num2);
		}
	else if(op=='/')
		{
			printf("value of two nos. after Division:%f\n",num1/num2);
		}
	else
		{
			printf("sorry!you entered an invalid operator:\n");
		}
		
		printf("Kiran");
	return 0;
}

	
	
