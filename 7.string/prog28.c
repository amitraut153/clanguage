#include<stdio.h>

char* mystrcpy(char*dest,char*src, int n){
	while(n != 0){
		*dest=*src;
		dest++;
		src++;
		n--;
	}
	*dest='\0';
	return dest;
}
void main(){
	char *str="Rahul Piche";
	char name[15];
	int n=5;

	mystrcpy(name,str,n);
	puts(name);
	
}
