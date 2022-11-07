//Deferencing pointer:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num=5;
	int *pnum=&num;
	printf("%p\n", &num);
	printf("%p\n",&*pnum);
	printf("%p\n", *&pnum);
        printf("%d\n", **&pnum);
	//By using aestrick"*" we can deference the value of pointer:
	return 0;           //In pointer memory address of the value that is assigned with some 
}			    //variable of some default data types:

			    //again if we want to get the memory address of the defined variable 
			    //we have to use & at the front of aestricks:
			    //example:&*pnum



