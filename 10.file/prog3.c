#include<stdio.h>
// fprintf()
void main(){

	FILE*fp=fopen("genius.txt", "w");

	fprintf(fp, "File handling by amit");

}
