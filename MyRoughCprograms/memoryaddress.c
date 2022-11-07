//memory address

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num=2;
	char Name[9]="Kiran";
	double num2=4.8;
	printf("num:%p\nName:%p\nnum2:%p\n",&num,&Name[9],&num2);
return 0;
}
