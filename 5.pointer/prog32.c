#include<stdio.h>
void main(){
	int x=10;
	char ch='A';
	double d=20.84;

	void* arr[3]={&x,&ch,&d};

	printf("%p\n", arr[0]);
	printf("%p\n", arr[1]);
	printf("%p\n", arr[2]);

	printf("%d\n", ((int*)(arr[0])));
	printf("%d\n", ((char*)(arr[1])));
	printf("%d\n", ((double*)(arr[2])));
}

