#include<stdio.h>
void main(){
	int x=1;
	printf("Start code \n");
	if(--x){
		printf("In first If block\n");
	}if(++x || x++){
		printf("In second If block\n");
	}
	printf("%d \n", x);
	printf("End user\n");
}
