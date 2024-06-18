#include<stdio.h>
char* mystrncpy(char* dest,char* src, int n){

	int count=0;
	while(n!=0 && *src != '\0'){

		*dest=*src;
		dest++;
		src++;
		n--;
		count++;
	}
	printf("%d\n", count);
	*dest='\0';
	return 0;
}

void main(){
	char*str="Rahu";
	char name[15];

	int n=8;
	mystrncpy(name,str,n);
	puts(name);
}
