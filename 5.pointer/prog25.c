#include<stdio.h>
void main(){
	int size;
	printf("Enter size of array:\n");
	scanf("%d", &size);

	int arr[size];
	printf("Enter Array Elements:\n");
	for(int i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	printf("Array Elements are\n");
	for(int i=0; i<size; i++){
		printf("%d", arr[i]);
		printf("%d\n", *(arr+i));
	}

}
