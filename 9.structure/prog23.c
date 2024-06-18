#include<stdio.h>
//unname structure
struct{
	int x;
	int y;
}
obj={10,20};

void main(){
	printf("%d\n", obj.x);
	printf("%d\n", obj.y);
}
