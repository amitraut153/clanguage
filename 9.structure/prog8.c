#include<stdio.h>

struct threMovie{
	char mName[20];
	int seatNo;
	float rateofmovie;

};
void main(){

	struct threMovie box1={"Bahubali",46, 8.9};

	printf("%s\n", box1.mName);
	printf("%d\n", box1.seatNo);
	printf("%f\n", box1.rateofmovie);

}



