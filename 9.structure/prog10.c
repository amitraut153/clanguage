#include<stdio.h>
#include<string.h>

struct Picnic{

	char location[10];
	int count;
	float distance;
};
void main(){
	struct Picnic obj1= {"Goa", 5, 460.50};
	struct Picnic obj2;

	strcpy(obj2.location, "Kashmir");
	obj2.count=2;
	obj2.distance=1200.50;

	printf("%s\n", obj1.location);
	printf("%d\n", obj1.count);
	printf("%f\n", obj1.distance);

	printf("%s\n", obj2.location);
	printf("%d\n", obj2.count);
	printf("%f\n", obj2.distance);

}
