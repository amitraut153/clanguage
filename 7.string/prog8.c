#include<stdio.h>
void main(){
	char pname[]={'R','o','h','i','t','s','\0'};
	char *name="Viratk";

	for(int i=0; i<7; i++){
		printf("%c", pname[i]);

	}
	printf("\n");
	for(int i=0; i<7; i++){
		printf("%c", name[i]);
	}
	printf("\n");
}
