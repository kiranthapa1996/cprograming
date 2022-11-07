//function for Division:
#include<stdio.h>
#include<stdlib.h>
void division(double num1,double num2)
{
	double num3;
	num3=num2/num1;
	printf("value of num1:%f\n",num1);
	printf("value of num2:%f\n",num2);
	printf("final solutions of two numbers:%f\n",num3);
}
int main()
{
	division(5.5,25.25);
	return 0;
}
