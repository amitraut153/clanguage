#include<stdio.h>
void main(){

	FILE *fp=fopen("info.txt", "w");
	
	printf("%ld\n", ftell(fp));
	fprintf(fp, "Amit2web");
	
	printf("%ld", ftell(fp));
	fprintf(fp, "Biencap");

}

