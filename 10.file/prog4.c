#include<stdio.h>

void main(){

	FILE *fp=fopen("biencap.txt", "w");

	char ch;
	fscanf(stdin, "%c",&ch);
	printf("%c\n", ch);
	

}
