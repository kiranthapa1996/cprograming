//interchange the contents of C and D:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	float c,d;
	char interchange;
	printf("enter value of C:");
	scanf("%f",&c);
	printf("enter the value of D:");
	scanf("%f",&d);
	printf("Do you want to interchange the value:(Y/N)");
	scanf("%s",&interchange);
	if(interchange=='Y')
	{
		printf("your value C after interchange:%f\n",d);
		printf("your value D after interchange:%f\n",c);
	}
	else
	{
		printf("Thanks for using:\n\n");
	}
return 0;
}
