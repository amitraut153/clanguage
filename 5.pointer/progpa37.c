#include<stdio.h>
void main(){
	int arr[5]={10,20,30,40,50};
	int *ptr1=arr;
	int *ptr2=&arr;    //warning
	int (*ptr3)[5]=&arr;
}
