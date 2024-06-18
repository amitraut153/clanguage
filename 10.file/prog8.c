#include<stdio.h>

void main(){

	FILE *fp=fopen("info.text", "w");
	printf("%ld\n", ftell(fp));

	fprintf(fp, "core2web");
	printf("%ld\n", ftell(fp));

	rewind(fp);
//	fprintf(fp,"Biencaps");
	printf("%ld\n", ftell(fp));

}


