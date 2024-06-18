#include<stdio.h>
int main(){
	float income;
	printf("Enter your income:\n");
	scanf("%f", &income);

	printf("Salary is %f\n", income);

	if(income >=00 && income <=500000){
		printf("Tax slab is 0%\n");
	}
	if(income >=500000 && income <= 1000000){
		printf("Tax Slab is 10%\n");
	}
	if(income >=1000000 && income <= 1500000)
		printf("Tax Slab is 15%\n");

	return 0;
}
