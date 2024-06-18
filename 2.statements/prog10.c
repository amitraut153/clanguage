#include<stdio.h>
void main(){
	int x;
	printf("enter value\n");
	scanf("%d", &x);

	if(x%4 == 0 && x%5 == 0){
		printf("%d is divisible by 4 as well ws 5 \n");
	}
	else{
		printf("%d is not divisible by 4 and 5 \n");
	}
}
