#include<stdio.h>
void fun(int x,int y,int *ptradd,int *ptrsub){
	*ptradd=x+y;
	*ptrsub=x-y;

/*	add=x+y;
	sub=x-y;

	return add,sub; */
}

void main(){
	int x=10;
	int y=20;
	int add;
	int sub;

	fun(10,20,&add,&sub);

	printf("%d\n", add);
	printf("%d\n", sub);
}
