#include<stdio.h>
void main(){
	int ch='A';
	for(int i=1; i<=5; i++){
		for(int sp=5-1; sp>=i; sp--){
			printf("- ");
		}
		for(int j=1; j<=i; j++){
			printf("%c ", ch);
		ch++;
		}
		printf("\n");
	}
}

