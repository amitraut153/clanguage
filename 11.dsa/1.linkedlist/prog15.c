#include<stdio.h>
#include<stdlib.h>

typedef struct Employee{
	char empName[20];
	int id;
	struct Employee*next;
}Emp;

Emp*head=NULL;

void addNode(){
	Emp*newNode=(Emp*)malloc(sizeof(Emp));
	
	getchar();
	
	printf("Enter Employee Name:\n");
	char ch;
	int i=0;
	while((ch=getchar()) != '\n'){
		(*newNode).empName[i]=ch;		//imp
		i++;
	}

	printf("Enter valid id:\n");
	scanf("%d", &newNode->id);

	newNode->next=NULL;		//imp 

	if(head==NULL){
		head=newNode;
	}
	else{
		Emp*temp=head;

		while(temp ->next != NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
}
void printLL(){
	Emp*temp=head;

	while(temp != NULL){
		printf("|%s", temp->empName);
		printf("->%d|", temp->id);

		temp=(*temp).next;
	}
}

void countNode(){
	Emp*temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	printf("Count=%d\n", count);
}

void main(){
	int count;
	printf("Enter node count:\n");
	scanf("%d", &count);

	for(int i=1; i<=count; i++){
		addNode();
	}
	printLL();
	countNode();

}
