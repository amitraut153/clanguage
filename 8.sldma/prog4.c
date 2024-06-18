//Local static
#include<stdio.h>
void fun();
void main(){
	fun();
	fun();
	fun();
}
void fun(){
	static int y=10;
	++y;

	printf("%d\n", y);
}
