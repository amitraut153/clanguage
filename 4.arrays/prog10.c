#include<stdio.h>
void main(){
	int arr1[3] = {10,20,30};
	int arr2[3] = {10,20,30};
	int flag=0;
	for(int i=0; i<3; i++){
		if(arr2[i] = arr1[i]){
			flag = 1;
		}
	}
	if(flag ==1){
		printf("Arrays are equal \n");
	}
	else{
		printf("Arrays are not equal\n");
	}
}

