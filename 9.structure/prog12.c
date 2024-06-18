#include<stdio.h>

struct OTT{
	char pName[20];
	int account;
	float price;
};

void main(){
	struct OTT obj1={"Netflix", 3, 499.50};

	struct OTT obj2;

	printf("Enter Platform name:\n");
	gets(obj2.pName);

	printf("Total account:\n");
	scanf("%d", &obj2.account);

	printf("Sub price:\n");
	scanf("%f", &obj2.price);

	printf("%s\n", obj1.pName);
	printf("%d\n", obj1.account);
	printf("%f\n", obj1.price);

	printf("%s\n", obj2.pName);
	printf("%d\n", obj2.account);
	printf("%f\n", obj2.price);
}

