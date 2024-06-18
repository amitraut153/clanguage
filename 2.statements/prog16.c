#include<stdio.h>
void main(){
	int numOfPersons;
	float ticketPrice;
	char row;

	printf("Enter number of persons\n");
	scanf("%d", &numOfPersons);

	printf("Enter tickets price\n");
	scanf("%f", &ticketPrice);

	printf("Which row you got\n");
	scanf(" %c", &row);

	printf("Number of persons = %d\n", numOfPersons);
	printf("Total tickets cost = %f\n", ticketPrice);
	printf("You got row= %c\n", row);
}
