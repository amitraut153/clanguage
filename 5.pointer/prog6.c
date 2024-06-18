#include<stdio.h>
void main(){
	int x=10;
	int y=20;
	int *ptr1=&x;
	int *ptr2=&y;
	printf("%d\n", *ptr1 + *ptr2);
	printf("%d\n", ptr1 + x);       // two pointers addition are not allow
					// one ptr and one int are allow
}
