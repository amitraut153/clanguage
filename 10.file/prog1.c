#include<stdio.h>

void main(){

	printf("%d\n", stdin->_fileno);		//0
	printf("%d\n", stdout->_fileno);	//1
	printf("%d\n", stderr->_fileno);	//2

	printf("%ld\n", sizeof(FILE));		//216
}
