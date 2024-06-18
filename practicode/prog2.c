#include<stdio.h>
void main(){
	int x=10;
	int y=20;

	/*printf("enter values of x and y:\n");
	scanf("%d %d", &x,&y);*/

	printf("Value of x is:%d\n", x);
	printf("Value of y is:%d\n", y);

	int temp;
	temp=x;
	x=y;
	y=temp;

	printf("Value of x:%d\n", x);
	printf("Value of y:%d\n", y);

}
