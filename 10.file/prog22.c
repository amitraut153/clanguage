#include<stdio.h>
#define access 1

void main(){

#if access
	printf("Access per...\n");
#else
	printf("Not access\n");

#endif
	printf("EOF \n");
}
