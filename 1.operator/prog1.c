#include<stdio.h>

int a= 10;            //global variable
void fun(){
	int x=20;	//local variable
	printf("In function \n");
}
void main(){
	int y=30;
	printf("start main \n");
	fun();
	printf("End function\n");
}
