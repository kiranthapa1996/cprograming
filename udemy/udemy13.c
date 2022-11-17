#include<stdio.h>
#include<stdlib.h>
int main()
{
	int g2,g3;
	float g1;
	float average;
	printf("Enter the value of grade1:");
	scanf("%f",&g1);
	printf("Enter the value of grade2:");
	scanf("%d",&g2);
	printf("Enter the value of grade3:");
	scanf("%d",&g3);
	average=g1+(float)g2+(float)g3;
	printf("Average value of three grades:%f\n\n",average);
	return 0;
}
