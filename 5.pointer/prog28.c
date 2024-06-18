#include<stdio.h>
void main(){
	int rows,cols;
	printf("Enter rows and cols:\n");
	scanf("%d", &rows,&cols);

	int sum=0;
	int arr[rows][cols];
	printf("Enter array elements:\n");

	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			scanf("%d", &arr[i][j]);
			sum=sum+arr[i][j];

		}
	}
	printf("Array elements:\n");
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			printf("%d\n",arr[i][j]);
		}
		printf("\n");
	}
	printf("Sum of array:%d\n");

}
