#include<stdio.h>
void main(){
	int Crop;
	printf("Enter your Crop name\n");
	scanf(" %d", &Crop);
	printf("%d", Crop);

	if(Crop == 'Groundnut'){
		printf("Rate of Groungnut is:6700/q\n");
	}if(Crop == 'Wheat'){
		printf("Rate of wheat is:3000/q\n");
	}else if(Crop == 'Jowar'){
		printf("Rate of jawar is:3500/q\n");
	}else if(Crop == 'Gram'){
		printf("Rate of gram is:6000/q\n");
	}else if(Crop == 'Mango'){
		printf("Rate of mango is:5000/q\n");
	}else{
		printf("This crop rate is not available\n");
	}
}
