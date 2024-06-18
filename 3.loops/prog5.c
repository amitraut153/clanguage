#include<stdio.h>
void main(){
	int x;
	int rem;
	printf("Enter num\n");
	scanf("%d", &x);
	while(x != 0){
		rem = x%10;
		printf("%d\n", rem);
		x = x/10;
	}
}
