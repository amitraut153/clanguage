#include<stdio.h>
void main(){
	char ch1 = 'x';
	char ch2 = 'y';
	char ch3 = 'z';

	char *ptr = &ch1;
	printf("%p\n", ptr);		//100
	printf("%c\n", *ptr);		//x

	printf("%p\n", (ptr + 1));	//101
	printf("%c\n", *(ptr + 1));	//y

	printf("%p\n", (ptr + 2));	//102
	printf("%c\n", *(ptr + 2));	//z
					//
	printf("%p\n", (ptr + ch1));

}
