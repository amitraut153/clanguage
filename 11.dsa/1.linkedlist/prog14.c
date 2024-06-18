#include<stdio.h>
#include<stdlib.h>

typedef struct Movie{
	char mName[20];
	int mNo;
	struct Movie*next;
}Mov;
Mov*head=NULL;

void addNode(){
	Mov*newNode=(Mov*)malloc(sizeof(Mov));

	getchar();
	printf("Enter movie Name:\n");
	//fgets(newNode->mName,16,stdin);
	char ch;
	int i=0;
	while((ch = getchar()) !='\n'){

		(*newNode).mName[i]=ch;
		i++;
	}
	
	printf("Enter no of movie:\n");
	scanf("%d", &newNode->mNo);

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
	while(temp != NULL){

		printf("|%s->", temp->mName);
		printf("%d|", temp->mNo);

		temp=(*temp).next;
	}
}

void main(){
	int nodeCount;
	printf("Enter no of node:");
	scanf("%d", &nodeCount);

	for(int i=1; i<=nodeCount; i++){
		addNode();
	}
	printLL();

}
