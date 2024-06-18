#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Employee{

	int empId;
	char empName[20];
	float sal;
	struct Employee*next;
};

void main(){

	struct Employee*emp1=(struct Employee*)malloc(sizeof(struct Employee));
	struct Employee*emp2=(struct Employee*)malloc(sizeof(struct Employee));
	struct Employee*emp3=(struct Employee*)malloc(sizeof(struct Employee));
	
	struct Employee*head=emp1;

	head->empId=1;
	strcpy(head->empName,"Amit");
	head->sal=80.00;
	head->next=emp2;

	head->next->empId=2;
	strcpy(head->next->empName, "Nikhil");
	head->next->sal=60.00;
	head->next->next=emp3;

	head->next->next->empId=3;
	strcpy(head->next->next->empName, "Nilesh");
	head->next->next->sal=50.00;
	head->next->next->next=NULL;

	printf("%d\n", head->empId);
	printf("%s\n", head->empName);
	printf("%f\n", head->sal);
	printf("%p\n", head->next);
	
	printf("\n");

	printf("%d\n", head->next->empId);
	printf("%s\n", head->next->empName);
	printf("%f\n", head->next->sal);
	printf("%p\n", head->next->next);

	printf("\n");

	printf("%d\n", head->next->next->empId);
	printf("%s\n", head->next->next->empName);
	printf("%f\n", head->next->next->sal);
	printf("%p\n", head->next->next->next);
}
	
