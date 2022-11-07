//writing files:
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fpointer=fopen("kiran.txt","a");
	fprintf(fpointer,"My name is Kiran Kumar Thapa\n");
	fprintf(fpointer,"My name is neha\n");
	fclose(fpointer);
	return 0;
}
	
