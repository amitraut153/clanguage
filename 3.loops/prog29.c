#include<stdio.h>
void main(){
	char ch='A';
	for(int i=1; i<=4; i++){
		for(int sp=4-1; sp>=i; sp--){
			printf("- ");
		}
		
		for(int j=4-2; j<=i; j++){
			printf("%c ", ch);
			ch++;
		}
		
		for(int j=1; j<=i; j++){
			printf("%c ", ch);
			ch++;
		}
		printf("\n");

	}
}
