#include<stdio.h>

void main(){

	FILE *fp=fopen("genius.txt","r+");

	fprintf(fp, "Exception handling");
}
