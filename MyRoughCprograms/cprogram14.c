//fuction using parameters:
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//called  function
int numerical(int num1,int num2)
{
	int num3=num1*num2;
	return num3;
	
}

//calling function
int main()
{
	int result = numerical(23,45);
	printf("The value after multiplication is : %d\n", result);
	return 0;
}
