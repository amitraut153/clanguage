#include<stdio.h>
void main(){
	float income;
	int name;
	int company;

	printf("Enter your income: \n");
	scanf("%f", &income);
	printf("Salary is %f\n",income);
	
	if(income >= 0 && income <= 500000){
		printf("Tax slab is 0%\n");
	}if(income >= 500000 && income <= 1000000){
		printf("Tax slab is 10%\n");
	}if(income >= 1000000 && income <= 1500000){
		printf("Tax slab is 15%\n");
	}if(income >= 1500000 && income <= 2000000){
		printf("Tax slab is 20%\n");
	}if(income >2000000){
		printf("Tax slab is 30%\n");
	}
}
