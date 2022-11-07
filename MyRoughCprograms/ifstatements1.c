//use of if statement to check whether word is true or false:

#include<stdio.h>
#include<stdlib.h>
char word(char fname[],char lname[])
{	
	char name;
		{
			if(fname[]=="Kiran"&& lname[]=="Thapa")
				{
					name="True";
				}
			else
				{
					name="false";
				}
		}
	return name;
}
int main()
	{
		printf("full name of a user is:%s\n",word("Kiran","Thapa"));
		return 0;
	}	
	
