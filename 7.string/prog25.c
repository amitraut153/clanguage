#include<stdio.h>
#include<string.h>
int mystrcmpi(char* str1,char* str2){
	while(*str1 != '\0'){
		if(*str1==*str2 || *str1-*str2==-32 || *str1-*str2==32){
			str1++;
			str2++;
		}
		else
			return *str1-*str2;
	}
	return 0;
}
			
void main(){
	char*str1="Amit";
	char*str2="amit";
	int diff=1;

	if(strlen(str1)==strlen(str2)){
		diff=mystrcmpi(str1,str2);
	}
	if(diff==0)
		printf("Strings are equal\n");
	else
		printf("Strings are not equal");
}
