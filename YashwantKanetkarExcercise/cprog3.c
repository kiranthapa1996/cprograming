//percentage marks and aggregate marks of student in 5 subjects:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	float English,math,physics,chemistry,biology;
	float aggregate_marks,percentage_marks,total;
	printf("Enter marks of English:");
	scanf("%f",&English);
	printf("Enter marks of Mathematics:");
	scanf("%f",&math);
	printf("Enter marks of Physics:");
	scanf("%f",&physics);
	printf("Enter marks of Chemistry:");
	scanf("%f",&chemistry);
	printf("Enter marks of Biology:");
	scanf("%f",&biology);
	aggregate_marks=(English+math+physics+chemistry+biology)/5;
	percentage_marks=aggregate_marks;
	printf("Aggregate marks of all subjects:%f\n\n",aggregate_marks);
	printf("Percentage marks of all subjects:%f\n\n",percentage_marks);
	return 0;
}
	
	
