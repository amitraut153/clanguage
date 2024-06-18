#include<stdio.h>

void main(){
	char ch='A';

	for(int i=1; i<=4; i++){
		for(int j=4; j>=i; j--){
			printf(" %c", ch);
			ch++;
		}
		for(int k=1; k<i; k++){
			printf(" *");
		}
		printf("\n");

	}
}
