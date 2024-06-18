#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee{

	int empId;
	char empName[20];
	float sal;
	struct Employee*next;
}Emp;

void accessData(Emp *ptr){

        printf("%d\n", ptr->empId);
        printf("%s\n", ptr->empName);
        printf("%f\n", ptr->sal);
        printf("%p\n", ptr->next);

        printf("\n");

}

void main(){

	Emp*emp1=(Emp*)malloc(sizeof(Emp));
	Emp*emp2=(Emp*)malloc(sizeof(Emp));
	Emp*emp3=(Emp*)malloc(sizeof(Emp));

	Emp*head=emp1;

	head->empId=1;
	strcpy(head->empName,"Ashok");
	head->sal=45.00;
	head->next=emp2;

	head->next->empId=2;
	strcpy(head->next->empName, "Purushottam");
	head->next->sal=40.00;
	head->next->next=emp3;

	head->next->next->empId=3;
	strcpy(head->next->next->empName,"Chandra");
	head->next->next->sal=55.00;
	head->next->next->next=NULL;


	accessData(emp1);
	accessData(emp2);
	accessData(emp3);

}



