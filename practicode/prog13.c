#include<stdio.h>

void main(){

	int i;
	printf("Enter num:\n");
	scanf("%d", &i);

	while(i>=0){
		printf("%d days remaining\n", i);
		i--;
	}
}
