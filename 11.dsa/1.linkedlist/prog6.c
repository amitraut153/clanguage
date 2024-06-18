#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Movie{

	int movNo;
	char mName[20];
	float imdb;
	struct Movie*next;
}Mv;

void accessData(Mv*ptr){

	printf("%d\n", ptr->movNo);
	printf("%s\n", ptr->mName);
	printf("%f\n", ptr->imdb);
	printf("%p\n", ptr->next);
	
	printf("\n");
}

void main(){
	Mv*mov1=(Mv*)malloc(sizeof(Mv));
	Mv*mov2=(Mv*)malloc(sizeof(Mv));
	Mv*mov3=(Mv*)malloc(sizeof(Mv));

	Mv*head=mov1;

	head->movNo=1;
	strcpy(head->mName,"Baaghi");
	head->imdb=8.8;
	head->next=mov2;

	head->next->movNo=2;
	strcpy(head->next->mName,"KGF");
	head->next->imdb=9.00;
	head->next->next=mov3;

	head->next->next->movNo=3;
	strcpy(head->next->next->mName,"Bahubali");
	head->next->next->imdb=9.9;
	head->next->next->next=NULL;

	accessData(mov1);
	accessData(mov2);
	accessData(mov3);

}


