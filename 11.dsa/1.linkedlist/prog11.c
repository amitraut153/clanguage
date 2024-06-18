#include<stdio.h>
#include<stdlib.h>

typedef struct Movie{
	char mName[20];
	float imdb;
	struct Movie*next;
	
}Mov;

Mov*head=NULL;

void addNode(){

	Mov*newNode=(Mov*)malloc(sizeof(Mov));

	printf("Enter Movie Name:\n");
	fgets(newNode->mName,15,stdin);

	printf("Enter rating:\n");
	scanf("%f", &newNode->imdb);

	newNode->next=NULL;

	head=newNode;

}
void printLL(){
	Mov*temp=head;
	while(temp != NULL){
		printf("%s", temp->mName);
		printf("%f", temp->imdb);

		temp=temp->next;
	}
}

void main(){

	addNode();
	printLL();

}

