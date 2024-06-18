#include<stdio.h>
void main(){
	char carr[]={'C','o','r','e','2','w','e','b','\0'};

	char*str="Core2web";

	printf("%s\n", carr);
	printf("%s\n", str);

	for(int i=0;i<=9; i++){
		printf("%c", carr[i]);
	}
	printf("\n");
}
