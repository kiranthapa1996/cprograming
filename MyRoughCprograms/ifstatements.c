//using of if statement to find out the maximum number among given three numbers:

#include<stdio.h>
#include<stdlib.h>
double max(double num1,double num2,double num3)
{
	double result;
		{
			if(num1>num2 && num1>num3)
				{
					result=num1;
				}
			else if(num2>num1 && num2>num3)
				{
					result=num2;
				}
			else
				{
					result=num3;
				}
		}
	return result;
}
int main()
{
	printf("highest among three is:%f\n",max(3.87,3.89,3.98));
	return 0;
}
