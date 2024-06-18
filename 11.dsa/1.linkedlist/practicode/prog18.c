#include<stdio.h>
#include<stdlib.h>

struct Demo{
	int data;
	struct Demo*next;

};
struct Demo*head=NULL;

struct Demo*createNode(){
	struct Demo*newNode=(struct Demo*)malloc(sizeof(struct Demo));

	printf("Enter Data:\n");
	scanf("%d", &newNode->data);

	newNode->next=NULL;
	return newNode;
}
void addNode(){
	struct Demo*newNode= createNode();

	struct Demo*temp=head;

	if(head == NULL)
		head=newNode;
	else{
		
		while(temp->next != NULL){

			temp=temp->next;
		}temp->next=newNode;
	}
}

void addFirst(){
	struct Demo*newNode=createNode();
	
	if(head ==NULL){
		head=newNode;
	}else{
		newNode->next=head;
		head=newNode;
	}
}


int countNode(){
	int count=0;
	struct Demo*temp=head;

	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}

void addAtPos(int pos){
	int count=countNode();

	if(pos<=0 || pos>=count+2){
		printf("Invalid Node position...\n");
		//return -1;
	}
	else{
		if(pos==count+1){
			addNode();
		}
		else if(pos==1){
			addFirst();
		}
		else{
			struct Demo*newNode=createNode();

			struct Demo*temp=head;

			while(pos-2){
				temp=temp->next;
				pos--;
			}
			newNode->next=temp->next;
			temp->next=newNode;
		}
	}
	//return 0;
}
void printLL(){

	struct Demo*temp=head;

	while(temp!=NULL){
		printf("|%d|", temp->data);
		temp=temp->next;
	}
}
void deleteFirst(){
	struct Demo*temp=head;
	head=temp->next;
	free(temp);
}

void deleteLast(){
	struct Demo*temp=head;

	while(temp->next->next !=NULL){
		temp=temp->next;
	}

	free(temp->next);
	temp->next=NULL;
}

void deleteAtPos(int pos){

	int count=countNode();

	if(pos<=0 || pos>count){
		printf("Invalid node Position\n");
		//return -1;
	}
	else{
		if(pos==count){
			deleteLast();
		}
		else if(pos ==1){
			deleteFirst();
		}
	}
	//return 1;
}
	

void main(){

	char choice;

	do{
		printf("1.addNode:\n");
		printf("2.addFirst:\n");
		printf("3.addAtPos:\n");
		printf("4.printLL:\n");
		printf("5.deleteFirst:\n");
		printf("6.deleteLast:\n");
		printf("7.deleteAtPos:\n");

		int ch;
		printf("Enter your choice:");
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
					printf("Enter pos to add Node:");
					scanf("%d", &pos);

					addAtPos(pos);
				}break;
			case 4:
				printLL();
				break;
			case 5:
				deleteFirst();
				break;
			case 6:
				deleteLast();
				break;
			case 7:
				{
					int pos;
					printf("Enter position to delete Node:\n");
					scanf("%d", &pos);

					deleteAtPos(pos);
				}
				break;
			default:
				printf("wrong choice\n");
		}
		getchar();
		printf("Do you want to continue...\n");
		scanf("%c", &choice);
	}
	while(choice=='y' || choice == 'Y');
}
