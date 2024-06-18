#include<stdio.h>

struct Demo{

	int jerNo;
	float avg;
	double grade1;
};

void main(){

	struct Demo obj;

	printf("%ld\n", sizeof(obj));
	printf("%ld\n", sizeof(struct Demo));

}
