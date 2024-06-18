#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct IPL{
	char sName[20];
	int tTeams;
	double price;
};

void main(){

	struct IPL*ptr=(struct IPL*)malloc(sizeof(struct IPL));

	strcpy((*ptr).sName,"Tata");
	ptr->tTeams=8;
	(*ptr).price=10.00;

	printf("%s\n", (*ptr).sName);
	printf("%d\n", ptr->tTeams);
	printf("%f\n", ptr->price);
}
