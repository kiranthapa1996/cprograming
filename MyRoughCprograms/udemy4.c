//simple calculator
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float num1,num2;
	
	num1=5;
	num2=2;
	printf("value of num1:%f\n",num1);
	printf("value of num2:%f\n",num2);
	printf("Result value of num1 and num2 after addition:%f\n",num1+num2);
	printf("Result value of num1 and num2 after subtraction:%f\n",num2-num1);
	printf("Result value of num1 and num2 after multiplication:%f\n",num1*num2);
	printf("Result value of num1 and num2 after division:%f\n",num2/num1);
	printf("Result value of num1 and num2 after modulus:%f\n\n",num1/num2);
	return 0;
}
