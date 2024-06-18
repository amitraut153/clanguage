#include<stdio.h>
void main(){
	for(int i=1; i<=4; i++){
		for(int sp=4-1; sp>=i; sp--){
			printf("- ");
		}

		for(int j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
}
