// use of switch statemets:
//in this statements we use switch methods to compare the value with group or bunch of others value:
//It is written as:switch(grade),Here grade is a character which is initialize in the beginnning of switch statement:
//Here default is used to define other values which we have not defined in the program:
//for switch statements we use case for verification of values:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char option;
	char stars[6];
	char feedback[20];
	int transport;
	printf("select the option to which city you want to visit:\n");
	scanf("%s",&option);
	printf("select the option of your mode of transportation:\n");
	scanf("%d",&transport);
	switch(option)
		{
			case 'A':
			printf("Welcome to the pokhara!\n");
			break;
			case 'B':
			printf("Welcome to the Biratnagar!\n");
			break;
			case 'C':
			printf("Welcome to the Birgunj!\n");
			break;
			case 'D':
			printf("Welcome to the Kathmandu!\n");
			break;
			default:
			printf("Sorry!you entered an invalid option:\n");
			printf("Re-select your option to select city!\n");
			
		}
	switch(transport)
		{
			case 1:
				printf("you choose luxury Bus as your mode of Transport!\n");
				break;
			case 2:
				printf("you choose Aeroplane as your mode of Transport!\n");
				break;
			case 3:
				printf("you choose Train as your mode of Transport!\n");
				break;
			default:
				printf("Sorry!you entered an invalid option:\n");
				printf("Try Again!\n");
		}
		printf("Thank you for using our service:\n\n\n");
		printf("please give your feedback:\n");
		scanf("%s",feedback);
		printf("Thank for giving your feedback:%s\n",feedback);
		printf("your feedback will help us to improve our service!\n\n\n");
		printf("give stars for our service:\n");
		scanf("%s",stars);
		printf("Thank you for your %s stars:\n",stars);
		return 0;
}
		             
