#include<stdio.h>
#include<string.h>

struct Cricplayer{

	int jerNo;
	char pName[20];
	float sal;
}
obj1={18, "Virat Kohli", 5.0};

void main(){
	struct Cricplayer obj2;
	obj2.jerNo=45;
	strcpy(obj2.pName, "Rohit Sharma");
	obj2.sal=5.0;

	printf("%d\n", obj2.jerNo);
	printf("%s\n", obj2.pName);
	printf("%f\n", obj2.sal);

	printf("%d\n", obj1.jerNo);
	printf("%s\n", obj1.pName);
	printf("%f\n", obj1.sal);

}

