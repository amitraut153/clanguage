#include<stdio.h>
void main(){
	printf("Start main\n");		//Warning implicit function
	fun();
	printf("End main\n");
}
void fun(){
	printf("In fun\n");
}
