#include<stdio.h>
void fun(int *x){
	printf("%p\n", x);
}
void main(){
	int a=10;
	int *ptr=a;
	fun(a);
}
	
