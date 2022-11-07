#include<stdio.h>
#include<stdlib.h>
char name(char fname[],char lname[])
{
	char fullname[20]="Kiran Thapa";
	printf("your first name:%s\n",fname);
	printf("your last name:%s\n",lname);
	printf("your full name:%s\n",fullname[]);
	return fullname;
}
int main()
{
	name("Kiran","Thapa");
	return 0;
}
	
