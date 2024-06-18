#include<stdio.h>
#include<stdlib.h>

struct Demo{
	int data;
	struct Demo*next;

};
struct Demo*head=NULL;

struct Demo*creatNode(){
	struct Demo*newNode=(struct Demo*)malloc(sizeof(struct Demo));
	
	printf("Enter Data:\n");
	scanf("%d", &newNode->data);

	newNode->next=NULL;

	return newNode;
	
}

void addNode(){

	struct Demo*newNode = creatNode();

	struct Demo*temp=head;

	if(head==NULL){
		head=newNode;
	}else{
		//struct Demo*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
}
void printLL(){
	struct Demo*temp=head;

	while(temp != NULL){
		printf("|%d|->", temp->data);
		temp=temp->next;
	}

}

void main(){

	int countNode;

	printf("Enter count of node:\n");
	scanf("%d", &countNode);

	for(int i=1; i<=countNode; i++){
		addNode();
	}
	printLL();
	deleteNode();
	printLL();

}
