//swapping of two numbers:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a;
	float b;
	float temp;
	printf("Enter the value of A:");
	scanf("%f",&a);
	printf("Enter the value of B:");
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("Swapping value of A:%f\n",a);
	printf("swapping value of B:%f\n\n",b);
	return 0;
}
	
	
