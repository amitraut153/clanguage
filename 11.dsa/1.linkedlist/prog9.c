#include<stdio.h>
#include<stdlib.h>

typedef struct Student{
	int id;
	float ht;
	struct Student*next;
}Stud;

Stud *addNode(Stud*head){
	Stud*newNode=(Stud*)malloc(sizeof(Stud));
	newNode->id=1;
	newNode->ht=5.5;
	newNode->next=NULL;

	head=newNode;
	return head;
}

void printLL(Stud *head){
	Stud*temp=head;

	while(temp!=NULL){
		printf("%d ", temp->id);
		printf("%f ", temp->ht);
		temp=temp->next;
	}
}
void main(){

	Stud*head=NULL;
	head=addNode(head);
	printLL(head);

}

