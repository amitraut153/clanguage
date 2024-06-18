#include<stdio.h>

struct cricPlayer{
	int jerNo;
	float avg;
	char grade;
};

void main(){
	struct cricPlayer vk;

	printf("%ld\n", sizeof(vk));

	printf("%ld", sizeof(struct cricPlayer));
}
