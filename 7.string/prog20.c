#include<stdio.h>
#include<string.h>

void main(){
	char str1[20]={'A','m','i','t','\0'};
	char *str2="Raut";

	puts(str1);
	puts(str2);

	strcat(str1,str2);

	puts(str1);
	puts(str2);
}

