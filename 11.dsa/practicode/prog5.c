#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct country{
	char couName[10];
	int states;
	float cEconomy;

};
void main(){

	struct country*cptr=(struct country*)malloc(sizeof(struct country));

	strcpy(cptr -> couName, "India");
	(*cptr).states=28;
	cptr -> cEconomy=3.75;

	printf("%s\n", cptr->couName);
	printf("%d\n", cptr->states);
	printf("%f\n", (*cptr).cEconomy);

}
