#include<stdio.h>
//fgetw() and putw()
void main(){

	FILE *fp=fopen("abc.txt","w+");

	int num1=10;
	int num2=20;

	printf("%ld\n", ftell(fp));

	putw(num1,fp);
	putw(num2,fp);

	printf("%ld\n", ftell(fp));
	rewind(fp);

	printf("%d\n", getw(fp));
	printf("%d\n", getw(fp));
}

