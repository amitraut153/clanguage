#include<stdio.h>
void main(){
	int arr[3][3]={10,20,30,40,50,60,70,80,90};

	printf("%p\n", &arr);
	printf("%p\n", arr);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0][0]);

	printf("%d\n", *(*(arr+1)+1));
	printf("%d\n", *(*(arr+2)+1));

}
