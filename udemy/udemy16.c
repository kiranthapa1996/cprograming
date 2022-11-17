//program to find out the sum of arithmetic progression of nth terms:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,an,sn;
	int n;
	printf("Enter the value of first term(a):");
	scanf("%f",&a);
	printf("Enter the value of last term(an):");
	scanf("%f",&an);
	printf("Enter the value of number of terms(n):");
	scanf("%d",&n);
	sn=(a+an)*n/2;//formula to find out the sum of the numbers in sequence by Arithmetic progression method
	printf("sum of the sequence of arithmetic progression is:%f\n\n",sn);
return 0;
}
	

