#include<stdio.h>

void fun();
void gun();
void main(){
	extern int x;
	fun();
	gun();

	printf("%d\n", x);
}	
