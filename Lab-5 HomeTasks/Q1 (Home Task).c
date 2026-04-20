#include <stdio.h>

int main(void){
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age < 5){
		printf("Ticket price: Free\n");
	}
	else if (age > 65){
		printf("Ticket price has been discounted!\n");
	} 
	else{
		printf("Ticket price: Standard\n");
	}
	
	return 0;
}
