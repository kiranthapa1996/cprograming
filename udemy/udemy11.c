/*Program to find out the area of rectangle 
we will get length and breadth from the user*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	double length,width;
	double Area;
	printf("enter the value of length:");
	scanf("%lf",&length);
	printf("enter the value of width:");
	scanf("%lf",&width);
	Area=length*width;
	printf("Area of rectangle:%fm\n\n",Area);
	return 0;
}
