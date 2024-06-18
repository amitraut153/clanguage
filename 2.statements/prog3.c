#include<stdio.h>
void main(){
	char userData;
	printf("Enter character \n");
	scanf("%c", &userData);

	printf("user data = %c\n", userData);

	if(userData >= 'A' && userData <= 'Z'){
		printf("YOU ENTERED UPPERCASE CHARACTER \n");
	}
	if(userData >= 'a' && userData <= 'z'){
		printf("you enter lowercase character \n");
	}
}
