#include<stdio.h>
#include<string.h>

struct Batsman{

	int jerNo;
	char bName[20];
	float avg;
	struct Batsman*next;
};

void main(){

	struct Batsman obj1,obj2,obj3;
	struct Batsman*head = &obj1;
	struct Batsman*next;	

	head->jerNo=18;
	strcpy(head->bName,"Virat");
	head->avg=40.50;
	head->next=&obj2;

	head->next->jerNo=45;
	strcpy(head->next->bName,"Rohit");
	head->next->avg=42.50;
	head->next->next=&obj3;

	head->next->next->jerNo=7;
	strcpy(head->next->next->bName,"MSD");
	head->next->next->avg=35.50;
	head->next->next->next=NULL;

	printf("%d\n", head->jerNo);
	printf("%s\n", head->bName);
	printf("%f\n", head->avg);

	printf("%d\n", head->next->jerNo);
	printf("%s\n", head->next->bName);
	printf("%f\n", head->next->avg);
	
	printf("%d\n", head->next->next->jerNo);
	printf("%s\n", head->next->next->bName);
	printf("%f\n", head->next->next->avg);

}

