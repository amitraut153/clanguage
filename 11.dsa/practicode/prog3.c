#include<stdio.h>

struct Movie{
	char mName[10];
	int count;
	float rating;

}
obj1={"Drishyam", 5, 8.8};

void main(){

	typedef struct Movie mv;
	mv obj2={"Kantaara", 10, 9.9};

	struct Movie *ptr1=&obj1;
	mv*ptr2=&obj2;

	printf("%s\n", (*ptr1).mName);
	printf("%d\n", ptr1->count);
	printf("%f\n", ptr1->rating);

	printf("%s\n", ptr2->mName);
	printf("%d\n", ptr2->count);
	printf("%f\n", ptr2->rating);

}

