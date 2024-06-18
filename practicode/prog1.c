#include<stdio.h>
void main(){
	int size;
	printf("Enter array size:\n");
	scanf("%d", &size);

	int arr[size];
	printf("Enter elements:\n");
	for(int i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	int search;
	printf("Enter search element:\n");
	scanf("%d", &search);
	int flag;

	for(int i=0; i<size; i++){
		if(search==arr[i]){
			flag=8;
		}
	}
	if(flag==8){
		printf("Element found\n");
	}
	else{
		printf("Element not found\n");
	}
}

