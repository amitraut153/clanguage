#include<stdio.h>
void main(){

	FILE *fp=fopen("success.txt","a");
	
	char compName[20]="Unacademy";
	

	fputs(compName, fp);
}
