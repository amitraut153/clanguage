//Continue

#include<stdio.h>

void main(){
	for(int i=0; i<=10; i++){
		if(i==5)
			continue;
		else
			printf("%d\n", i);
	}
}

