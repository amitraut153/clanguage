#include<stdio.h>
#include<stdlib.h>

void *malloc(size_t);
typedef struct Node{
	struct Node*prev;
	int data;
	struct Node*next;
}Node;

Node*head=NULL;

Node*createNode(){
	Node*newNode=(Node*)malloc(sizeof(Node));

	newNode->prev=NULL;
	printf("Enter data:\n");
	scanf("%d",  &newNode->data);

	newNode->next=NULL;

	return newNode;
}
void addNode(){
	Node*newNode=createNode();

	if(head==NULL){
		head=newNode;
	}
	else{
		Node*temp=head;

		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->prev=temp;
	}
}
void printLL(){
	Node*temp=head;

	while(temp->next != NULL){
		
		printf("|%d|->", temp->data);
		temp=temp->next;
	}
	printf("|%d|\n", temp->data);


}
void addFirst(){
	Node*newNode=createNode();

	if(head==NULL){
		head=newNode;
	}
	else{
		newNode->next=head;
		head->prev=newNode;
		head=newNode;
	}
}
int countNode(){
	int count=0;
	Node*temp=head;

	while(temp != head){
		count++;
		temp=temp->next;
	}return count;
}

int addAtPos(int pos){
	
	int count=countNode();
	if(pos<=0 || pos>=count+2){
		printf("Invalid node position:\n");
		return -1;
	}
	else{
		if(pos==count+1){
			addNode();
		}
		else if(pos ==1){
			addFirst();
		}
		else{
			Node*newNode=createNode();
			Node*temp=head;

			while(pos-2){
				temp=temp->next;
				pos--;
			}
			newNode->next=temp->next;
			newNode->prev=temp;
			temp->next->prev=newNode;
			temp->next=newNode;
		}
	}
}
void deleteFirst(){

	int count=countNode();

	if(head==NULL){
		printf("Nothing to delete:\n");
		return -1;
	}
	else if(count==1){
		free(head);
		head=NULL;
	}
	else{
		head=head->next;
		free(head->prev);
		head->prev=NULL;
	}
}

void main(){

	int countNode;
	printf("Enter count Node:\n");
	scanf("%d", &countNode);
	
	for(int i=1; i<=countNode; i++){
		addNode();
	}
	printLL();
	addFirst();
	printLL();

	int pos;
	printf("Enter position to add Node:\n");
	scanf("%d", &pos);

	addAtPos(pos);
	printLL();
	deleteFirst();
	printLL();
}


