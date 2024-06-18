#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Society{
	char sName[20];
	int wings;
	float avgRent;
};


void main(){
	struct Society*ptr=(struct Society*)malloc(sizeof(struct Society));

	strcpy((*ptr).sName, "Sun Universe");
	ptr->wings=18;
	(*ptr).avgRent=3000.50;

	printf("%s\n", ptr->sName);
	printf("%d\n", ptr->wings);
	printf("%f\n", (*ptr).avgRent);

}
