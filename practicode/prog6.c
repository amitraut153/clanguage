#include<stdio.h>

void main(){

	float Pmoney;

	printf("Enter your pocket money:\n");
	scanf("%f", &Pmoney);

	if(Pmoney >=2000){
		printf("Happipolla\n");
	}
	else if(Pmoney >=1500){
		printf("CO2\n");
	}
	else if(Pmoney >= 1000){
		printf("Frindship Gurden\n");
	}
	else if(Pmoney >=500){
		printf("Sarover\n");
	}
	else{
		printf("Go to home\n");
	}
}
