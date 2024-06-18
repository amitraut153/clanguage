#include<stdio.h>
void main(){
	int i=1;
	int n=100;

	while(i <= n){
		if(i%4 == 0 && i%5 == 0){
			printf("%d is divisible by 4 as well as 5\n", i);
		}
		
		else{
			printf("%d is not divisible by 4 as well as 5\n", i);
		}
		i++;
	}
}
