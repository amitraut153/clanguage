#include<stdio.h>
#include<stdlib.h>

typedef struct Movie{
	
	char mName[20];
	int movNo;
	float imdb;
	struct Movie*next;
}Mov;

Mov*head=NULL;
void addNode(){
	Mov*newNode=(Mov*)malloc(sizeof(Mov));

	getchar();
	printf("Enter movie name:\n");
	fgets(newNode->mName,15,stdin);
	/*char ch;
	int i=0;
	while((ch=getchar()) != '\n'){
		(*newNode).mName[i]=ch;
		i++;
	}*/

	printf("Enter movie number:\n");
	scanf("%d ", &(*newNode).movNo);

	printf("Enter rating:\n");
	scanf("%f ", &(*newNode).imdb);


	newNode->next=NULL;

	if(head == NULL){
		head=newNode;
		
	}
	else{
		Mov*temp=head;

		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
}
void printLL(){
	Mov*temp=head;

	while(temp!=NULL){

		printf("%s ", temp->mName);
		printf("%d ", temp->movNo);
		printf("%f ", temp->imdb);

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
}

