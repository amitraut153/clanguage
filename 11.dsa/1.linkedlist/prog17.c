#include<stdio.h>
#include<stdlib.h>

struct Demo{
	int data;
	struct Demo*next;
};

struct Demo*head=NULL;

struct Demo*createNode(){

	struct Demo*newNode= (struct Demo*)malloc(sizeof(struct Demo*));

	printf("Enter data:\n");
	scanf("%d", &newNode->data);

	newNode->next=NULL;
	return newNode;
}

void addNode(){

	struct Demo*newNode=createNode();
	
	struct Demo*temp=head;
	if(head == NULL)
		head=newNode;
	else{
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
}

void addFirst(){
	struct Demo*newNode=createNode();
	
	newNode->next=head;
	head=newNode;
}

void printLL(){
	struct Demo*temp=head;

	while(temp!=NULL){
		printf("|%d|", temp->data);
		temp=temp->next;
	}
}

void addAtNode(int pos){
	struct Demo*newNode=createNode();

	struct Demo*temp=head;

	while(pos-2){
		temp=temp->next;
		pos--;
	}

	newNode->next=temp->next;
	temp->next=newNode;
}

void deleteFirst(){
	struct Demo*temp=head;
	head=temp->next;

	free(temp);
}

void deleteLast(){
	struct Demo*temp=head;

	while(temp->next->next != NULL){
		temp=temp->next;
	}

	free(temp->next);
	temp->next=NULL;
}


void main(){

	char choice;
	do{
		printf("1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addAtPosition\n");
		printf("4.printLL\n");
		printf("5.deleteFirst\n");
		
		printf("6.deleteLast\n");

		int ch;
		printf("Enter your choice:\n");
		scanf("%d", &ch);
		
		switch(ch){
			case 1:
				addNode();
				break;
			case 2:
				addFirst();
				break;
			case 3:
				{
					int pos;
					printf("Enter position to add Node:\n");
					scanf("%d", &pos);

					addAtNode(pos);
				}
				break;
			case 4:
				printLL();
				break;
			case 5:
				deleteFirst();
				break;
			case 6:
				deleteLast();
				break;

			default:
				printf("Wrong Choice\n");
		}

		getchar();
		printf("Do you want to continue:\n");
		scanf("%c", &choice);

	}
	while(choice=='y' || choice =='Y');

}
