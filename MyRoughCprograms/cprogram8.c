#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char Name[20];
	int rollno;
	double marks;
	char grade[20];
	printf("Enter your name:\n");
	fgets(Name,20,stdin);
	printf("Enter your RollNo.:\n");
	scanf("%d",&rollno);
	printf("Enter your Total marks:\n");
	scanf("%lf",&marks);
	printf("Enter your Grade:\n");
	fgets(grade,20,stdin);
	printf("Name:%s\n",Name);
        printf("RollNo:%d\n",rollno);
	printf("Marks:%f\n",marks);
	printf("Grade:%s\n",grade);
	return 0;
}
