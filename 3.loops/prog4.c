#include<stdio.h>
void main(){
	int start,end;
	printf("Enter start num\n");
	scanf("%d", &start);
	printf("Enter end num\n");
	scanf("%d", &end);

	while(start <= end){
		if(start%4 == 0 && start%5 ==0){
			printf("%d is divisible by 4 and 5\n", start);
		}
		start++;
	}
}
