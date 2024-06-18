#include<stdio.h>
void main(){
	int x=1;
	char ch= 'A';
	for(int i=1; i<=4; i++){
		x=1;
		ch='A';
		for(int j=4; j>=i; j--){
			if(j%2 != 0){
				printf("%c ", ch);
				ch++;
			}
			else{
				printf("%d ", x);
				x++;
			}
		}
		printf("\n");
	}
}
