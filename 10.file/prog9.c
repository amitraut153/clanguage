#include<stdio.h>
void main(){

	FILE *fp=fopen("biencap.txt","w");
	
	printf("%d\n", getw(fp));


}
