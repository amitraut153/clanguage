#include<stdio.h>
void main(){
	int iarr[5];
	printf("Enter array elements:\n");

	for(int i=0; i<5; i++){
		scanf("%d", &iarr[i]);
	}
	int sum=0;
	for(int i=0; i<5; i++){
		sum=sum+iarr[i];
	}
	printf("aDDITION OF ARRAY ELEMENTS ARE:%d\n", sum);
}

