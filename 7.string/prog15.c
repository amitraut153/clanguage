#include<stdio.h>
#include<string.h>
void main(){
	char name[10]={'K','l','R','a','h','u','l'};
	char *str="Virat Kohli";

	int lenName=strlen(name);
	int lenstr=strlen(str);

	printf("%d\n",lenName);
	printf("%d\n", lenstr);
}
