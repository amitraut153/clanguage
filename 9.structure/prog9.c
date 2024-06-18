#include<stdio.h>
struct movie{
	char mName[20];
	int noOfTick;
	float price;

};

struct movie obj1={"Kantara",2,300.00};

void fun(){
	struct movie obj3={"Tiger Mela aahe", 7, 1200.50};
	
	printf("%s\n", obj3.mName);
	printf("%d\n", obj3.noOfTick);
	printf("%f\n", obj3.price);

}

void main(){
	struct movie obj2={"Drishyam", 2, 450.5};

	printf("%s\n", obj1.mName);
	printf("%d\n", obj1.noOfTick);
	printf("%f\n", obj1.price);

	printf("%s\n", obj2.mName);
	printf("%d\n", obj2.noOfTick);
	printf("%f\n", obj2.price);

	fun();

}

