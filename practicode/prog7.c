#include<stdio.h>
void main(){

	float CropRate;
	printf("Enter following rate:\n");
	printf("1. 7000/Q\n2. 3000/Q\n3. 3500/Q\n4. 6500/Q\n5. 1300/Q\n6. 5000/Q\n");
	scanf("%f", &CropRate);

	if(CropRate==7000){
		printf("Your crop is: Groundnut/Q\n");
	}
	else if(CropRate==3000){
		printf("Your crop is: Wheat/Q\n");
	}
	else if(CropRate==3500){
		printf("Your crop is: Jawar/Q\n");
	}
	else if(CropRate==6500){
		printf("Your crop is: Gram/Q\n");
	}
	else if(CropRate==1300){
		printf("Your crop is: Banana/Q\n");
	}
	else if(CropRate==5000){
		printf("Your crop is: Mango/Q\n");
	}
	else{
		printf("Not Found..\n");
	}
}
