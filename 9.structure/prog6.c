#include<stdio.h>

//Structure assignment
struct cricPlayer{

	char pName[20];
	int jerNo;
	float avg;

};
void main(){
	struct cricPlayer obj1={"Virat Kohli", 18,50.33};

	printf("%s\n", obj1.pName);
	printf("%d\n", obj1.jerNo);
	printf("%f\n", obj1.avg);

}
