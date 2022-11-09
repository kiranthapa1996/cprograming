//convert distance into different units:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	double km,meters,feet,inches,centimeters;
	printf("Enter the distance in km between city A and B:");
	scanf("%lf",&km);
	meters=1000*km;
	feet=3280.84*km;
	inches=39370.08*km;
	centimeters=100000*km;
	printf("km to meters:%f\n",meters);
	printf("km to feet:%f\n",feet);
	printf("km to inches:%f\n",inches);
	printf("km to centimeters:%f\n\n",centimeters);
	return 0;
}
	
