#include<stdio.h>

void main(){
	int x;
	printf("Enter a value b/w 1 to 5\n");
	scanf("%d", &x);

/*	if(x==1){
		printf("ONE\n");
	}
	else if(x==2){
		printf("TWO\n");
	}
	else if(x==3){
		printf("THREE\n");
	}
	else if(x==4){
		printf("FOUR\n");
	}
	else if(x==5){
		printf("FIVE\n");
	}*/

	switch(x){
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("TWO\n");
			break;
		case 3:
			printf("THREE\n");
			break;
		case 4:
			printf("FOUR\n");
			break;
		case 5:
			printf("FIVE\n");
			break;
		default:
			printf("Not Exit..\n");
			break;
	}

}
