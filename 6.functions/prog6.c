#include<stdio.h>
void funarr(int (*ptr)[]){
	printf("%p\n", ptr);
}
void main(){
	int arr1[]={10,20,30,40};

	funarr(&arr1);
}

