#include<stdio.h>
void main(){

	FILE *fp= fopen("biencap.txt","r");
	FILE *fp2=fopen("success.txt","w");
	char ch;

	while((ch=fgetc(fp)) != EOF){

		fputc(ch,fp2);		//print in file
		fputc(ch,stdout);	//print in monitor
	}
}
