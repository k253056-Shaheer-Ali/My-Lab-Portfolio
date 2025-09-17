/* Ask how many pizzas they want (1, 2, or 3). 1 pizza costs $8, 2 pizzas cost $15, and 3 pizzas cost
$21. Calculate and print the total cost with number of pizza. */

#include <stdio.h>

int main(void){
	int quantity;
	int total;
	
	printf("How many Pizza(s) you want? (1,2 or 3): \n");
	scanf("%d", &quantity);
	
    if (quantity == 1){
    	total = 8;
	} else if (quantity == 2) {
		total = 15;
	} else if (quantity == 3) {
		total = 21;
	} else {
		printf("Invalid quantity.\n");
	return 1;
	}
	
	printf("The total cost for %d pizza(s) is: $%d\n", quantity, total);
	
	return 0;
}
