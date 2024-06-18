#include<stdio.h>
#include<string.h>

struct DEmo{
	int x;
	int y;
}obj1;

void main(){

	obj1.x=10;
	obj1.y=20;

	printf("%d\n", obj1.x);
	printf("%d\n", obj1.y);
}

