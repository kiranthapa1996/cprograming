//arithmetic progression to find out the nth terms:
//nth is the number of terms which will be provided by user>

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,nth,n,d;
	printf("enter the first term of arithmetic progression(a):");
	scanf("%d",&a);
	printf("enter the number of terms(n):");
	scanf("%d",&n);
	printf("enter the differnce between the numbers(d):");
	scanf("%d",&d);
	nth=a+(n-1)*d;//formula to find out the nth term of the sequence by Arithmetic progression method:
	printf("last term of this sequence is:%d\n\n",nth);
	return 0;
}
