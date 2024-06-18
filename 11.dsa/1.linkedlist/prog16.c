#include<stdio.h>
#include<stdlib.h>

typedef struct Employee{
	char name[20];
	int id;
	struct Employee*next;
}Emp;
Emp*head=NULL;

Emp*creatNode(){
	Emp*newNode=(Emp*)malloc(sizeof(Emp));

	getchar();
	printf("Enter Name:\n");
	char ch;
	int i=0;

	while((ch=getchar()) != '\n'){
		(*newNode).name[i]=ch;
		i++;
	}

	printf("Enter id:\n");
	scanf("%d", &newNode->id);

	newNode->next=NULL;

	return newNode;
}
void addNode(){

	Emp*newNode=creatNode();

	if(head==NULL){
		head=newNode;
	}
	else{
		Emp*temp=head;

		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
}

void printLL(){
	Emp*temp=head;

	while(temp != NULL){
		printf("|%s->", temp->name);
		printf("%d|", temp->id);

		temp=temp->next;

	}
	printf("\n");
}
void countNode(){
	Emp*temp=head;
	int count=0;

	while(temp != NULL){
		count++;
		temp=temp->next;
	}

	printf("\n Count=%d\n", count);
}

void addFirst(){
	Emp*newNode=creatNode();

	if(head==NULL){
		head=newNode;
	}
	else{

		newNode->next=head;
		head=newNode;
	}
}

void addAtPos(int pos){
	Emp*newNode=creatNode();
	Emp*temp=head;

	while(pos-2){
		temp=temp->next;
		pos--;
	}
	newNode->next=temp->next;
	temp->next=newNode;
}

void main(){
	int nodeCount;

	printf("Enter Node count:\n");
	scanf("%d", &nodeCount);

	for(int i=1; i<nodeCount; i++){
		addNode();
	}
	printLL();
	countNode();
	addFirst();
	printLL();
	
	int pos;
	printf("Enter position to add newNode:\n");
	scanf("%d", &pos);

	addAtPos(pos);
	printLL();

}

