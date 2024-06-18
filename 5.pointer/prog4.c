#include<stdio.h>
void main(){
	float x=30.50;
	char y='A';
	int *ptr1=&x;
	int *ptr2=&y;

	printf("%f\n", x);
	printf("%c\n", y);
	printf("%lf\n", *ptr1);
	printf("%c\n", *ptr2);
}
