#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct Company{

	char cName[20];
	int Empcount;
	float reveneu;

};

void main(){
	struct Company *cptr=(struct Company*)malloc(sizeof(struct Company));

	strcpy(cptr->cName, "Veritas");
	cptr -> Empcount = 700;
	(*cptr).reveneu=150.50;


	printf("%s\n", cptr->cName);
	printf("%d\n", (*cptr).Empcount);
	printf("%f\n", (*cptr).reveneu);

}
