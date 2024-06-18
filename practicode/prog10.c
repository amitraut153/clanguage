#include<stdio.h>

void main(){

	int StartNum, EndNum;
	printf("Enter start num:\n");
	scanf("%d", &StartNum);

	printf("Enter End num:\n");
	scanf("%d", &EndNum);

	while(StartNum <= EndNum){
		if(StartNum%4==0 && StartNum%5==0){
			printf("%d\n", StartNum);
		}
		StartNum++;
	}
}
