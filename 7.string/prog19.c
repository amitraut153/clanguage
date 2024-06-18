#include<stdio.h>
#include<string.h>

void main(){
	char *str1="Amit";
	char *str2="Amit";

	int diff =strcmp(str1,str2);
	if(diff==0)
		printf("String are equal \n");
	else
		printf("Strings are not equal\n");
}
