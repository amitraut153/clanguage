#include<stdio.h>
void main(){
	int x;
	printf("Enter a value b/w 1 to 5\n");
	scanf("%d", &x);
	
	if(x==1){
		printf("One\n");
	}
	else if(x==2){
		printf("Two\n");
	}else if(x==3){
		printf("Three\n");
	}else if(x==4){
		printf("Four\n");
	}else if(x==5){
		printf("Five\n");
	}
	else{
		printf("Value not exit\n");
	}
}
