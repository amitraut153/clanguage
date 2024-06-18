#include<stdio.h>
#include<string.h>

struct Company{

	int empCount;
	char compName[20];
	float reveneu;
	struct Company*next;
};

void main(){

	struct Company obj1,obj2,obj3;
	struct Company*head=&obj1;
	struct Company*next;

	head->empCount=700;
	strcpy(head->compName,"Amit2web");
	head->reveneu=250.50;
	head->next=&obj2;

	head->next->empCount=800;
	strcpy(head->next->compName,"Tatatech");
	head->next->reveneu=350.50;
	head->next->next=&obj3;

	head->next->next->empCount=900;
	strcpy(head->next->next->compName,"Amazonlit");
	head->next->next->reveneu=150.50;
	head->next->next->next=NULL;

	printf("%d\n",head->empCount);
	printf("%s\n",head->compName);
	printf("%f\n", head->reveneu);

	printf("%d\n", head->next->empCount);
	printf("%s\n", head->next->compName);
	printf("%f\n", head->next->reveneu);
	
	printf("%d\n", head->next->next->empCount);
	printf("%s\n", head->next->next->compName);
	printf("%f\n", head->next->next->reveneu);
}

