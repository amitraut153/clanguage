#include<stdio.h>
void main(){
	int row;
	printf("Enter rows\n");
	scanf("%d", &row);
	for(int i=1; i<=row; i++){
		for(int sp=row; sp>=i; sp--){
			printf("  ");
		}
		for(int j=1; j<=i; j++){
			printf("* ");
		}
		for(int j=1+1; j<=i; j++){

			printf("* ");
		}
		
		printf("\n");
	}
}
 				


