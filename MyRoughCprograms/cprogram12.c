//Definning the function:
#include<stdio.h>
#include<stdlib.h>
void numerical()
{	
	int num1,num2,num3;
	printf("enter the value of num1:\n");
	scanf("%d",&num1);
	printf("enter the value of num2:\n");
	scanf("%d",&num2);
	num3=num1+num2;
	printf("final value:%d\n",num3);
}
int main()
{
	numerical();
	return 0;
}	
