//program based on struct:
//In struct we can add/store multiple types of data types:i.e int,float,char,double etc:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	char Name[50];
	char Address[50];
	int age;
	int class;
};

int main()
{
	struct student student1;
	student1.age=25;
	student1.class=12;
	strcpy(student1.Name,"Kiran Kumar Thapa");
	strcpy(student1.Address,"Qno:49,O.S.A.P 2nd Bn Jharsuguda,Odisha");
	printf("Name of the student1 :%s\n",student1.Name);
	printf("Address of the student1 :%s\n",student1.Address);
	printf("Age of the student1 :%d\n",student1.age);
	printf("In which class student1 study :%d\n\n\n",student1.class);
	
	
	struct student student2;
	student2.age=25;
	student2.class=12;
	strcpy(student2.Name,"Kiran Kumar Thapa");
	strcpy(student2.Address,"Qno:49,O.S.A.P 2nd Bn Jharsuguda,Odisha");
	printf("Name of the student2 :%s\n",student2.Name);
	printf("Address of the student2 :%s\n",student2.Address);
	printf("Age of the student2 :%d\n",student2.age);
	printf("In which class student2 study :%d\n\n",student2.class);
	
	return 0;
	
}
	
	
	
