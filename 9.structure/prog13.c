#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
	int*ptr=(int*)malloc(sizeof(int));

	*ptr=50;

	printf("%p\n", ptr);
	printf("%d\n", *ptr);
}
