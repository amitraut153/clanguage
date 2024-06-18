#include<stdio.h>
void main(){
	int size;
	printf("Enter size:\n");
	scanf("%d", &size);

	int arr[size];
	printf("Enter array elements:\n");
	for(int i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	int flag=0;
	for(int i=0; i<size; i++){
		if(arr[i]%4==0 && arr[i]%5==0){
			flag=1;
		}
	}
	if(flag==1){
		printf("found\n");
	}
	else{
		printf("Not found:\n");
	}
}

	

