#include<stdio.h>
#include<string.h>

struct Movie{
	char mName[20];
	struct MovieInfo{
		char actor[20];
		float imdb;
	}obj1;
};
void main(){

	//struct Movie obj2={"RATHDM",{"R Madhvan", 8.5}};	or also
	struct Movie obj2;
	strcpy(obj2.mName,"RHTHDM");
	strcpy(obj2.obj1.actor,"R Madhvan");
	obj2.obj1.imdb=8.5;

	printf("%s\n", obj2.mName);
	printf("%s\n", obj2.obj1.actor);
	printf("%f\n", obj2.obj1.imdb);

}
