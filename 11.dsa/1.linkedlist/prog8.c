#include<stdio.h>
#include<stdlib.h>

typedef struct Student{

	int id;
	float ht;
	struct Student*next;
}Stud;

void main(){
	
	Stud *head=NULL;
	Stud*newNode=(Stud*)malloc(sizeof(Stud));

	newNode->id=1;
	newNode->ht=5.5;
	newNode->next=NULL;

	head=newNode;

	newNode=(Stud*)malloc(sizeof(Stud));
	newNode->id=2;
	newNode->ht=6.5;
	newNode->next=NULL;

	head->next=newNode;

	newNode=(Stud*)malloc(sizeof(Stud));
	newNode->id=3;
	newNode->ht=7.5;
	newNode->next=NULL;

	head->next->next=newNode;

	Stud*temp=head;

	while(temp!=NULL){

		printf("%d ",temp->id);
		printf("%f ", temp->ht);
		temp=temp->next;
	}
	printf("\n");


}

