#include<stdio.h>
void main(){
	char ch='A';
	for(int i=1; i<=2; i++){
		for(int j=1; j<=13; j++){
			printf("%c   ", ch);
			ch++;
		}
		printf("\n");
	}
}

