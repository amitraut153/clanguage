#include<stdio.h>
void main(){
	int x=1;
	for(int i=1; i<=8; i++){
		for(int j=1; j<=8; j++){
			printf("%d  ", x);
			x++;
		}
		printf("\n");
	}
}
