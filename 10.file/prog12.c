#include<stdio.h>
//fgets() & fputs()
void main(){

	FILE *fp=fopen("success.txt", "r");
	char compName[20];
	fgets(compName, 12,fp);

	puts(compName);
}
