#include<stdio.h>
void main(){
	char name[20];
	printf("Enter string :\n");

	scanf("%[^\n]", name);

	printf("%s\n", name);


}
	
