//conversion of temperature from farhenheit degree to centigrade degree:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	float farhenheit_degree,centigrade_degree;
	char conversion;
	printf("Enter the temperature of city:");
	scanf("%f",&farhenheit_degree);
	scanf("%c",&conversion);
	printf("Temperature of city:%f farheinheit\n\n",farhenheit_degree);
	printf("Would you to convert it to centigrade(Y/N):\n\n");
	scanf("%c",&conversion);
	if(conversion=='Y')
	{
		centigrade_degree=(farhenheit_degree-32)*0.5555;
		printf("Temperture in degree centigrade:%f\n\n",centigrade_degree);
	}
	else
	{
		printf("Thank for using...Visit Again in future:\n\n");
	}
return 0;
}
		
