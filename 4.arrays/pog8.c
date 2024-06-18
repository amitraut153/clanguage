#include<stdio.h>
void main(){
	int arr1[3]={10,20,30};
	
	printf("arr1:\n");
	for(int i=0; i<3; i++){
		printf("%d\n", arr1[i]);
	}
	
	int arr2[3];
	for(int i=0; i<3; i++){
		arr2[i] = arr1[i];
	}
	printf("arr2 :\n");
	for(int i=0; i<3; i++){
		printf("%d\n", arr2[i]);
	}
}


