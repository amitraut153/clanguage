#include<stdio.h>
void callByAddress(int*);
void main(){
	int x=10;
	printf("%d\n", x);
	callByAddress(&x);
	printf("%d\n",x);
}
void callByAddress(int *ptr){
	printf("%p\n", ptr);
	printf("%d\n", *ptr);

	*ptr=50;
	printf("%d\n", *ptr);
}
