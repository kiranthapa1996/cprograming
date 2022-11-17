//perimeter of a given rectangle:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	double length,Width,perimeter;
	printf("enter the length:");
	scanf("%lf",&length);
	printf("enter the width:");
	scanf("%lf",&Width);
	perimeter=2*(length+Width);
	printf("Perimeter of Rectangle:%fm\n\n",perimeter);
	return 0;
}
