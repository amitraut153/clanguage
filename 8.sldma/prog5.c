#include<stdio.h>
static int y=10;

void fun(){

	++y;
	printf("%d\n", y);
}
void main(){
	fun();
	printf("%d\n", y);
	fun();
	printf("%d\n", y);
	fun();
	printf("%d\n", y);
}
