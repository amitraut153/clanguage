#include<stdio.h>

void main(){
	FILE *fp=fopen("genius.txt", "r");

	printf("%p\n", fp);
}
