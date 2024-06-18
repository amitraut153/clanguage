#include<stdio.h>
void main(){
	float Pmoney;
	printf("Enter your Pocket money\n");
	scanf("%f", &Pmoney);

	if(Pmoney >= 2500){
		printf("Go to Happipola\n");
	}else if(Pmoney >= 2000){
		printf("Go to CO2 \n");
	}else if(Pmoney >=1000){
		printf("Go to sarovar\n");
	}else if(Pmoney >= 500){
		printf("Go to vaishali \n");
	}else{
		printf("Go to Home plan cancel\n");
	}
}
