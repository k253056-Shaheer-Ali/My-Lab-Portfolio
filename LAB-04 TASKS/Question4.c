// Ask for crust type and add the cost to the total. Print the new total Cost. Regular crust: $0. Thin crust: $1. Stuffed crust: $2. 

#include <stdio.h>

int main(void){
	int total = 8;     //Assuming the total
	int crust_type;
	int crust_cost = 0;
	
	printf("Select the crust type:\n");
	printf("1. Regular crust (0$))\n");
	printf("2. Thin crust (1$)\n");
	printf("3. Stuffed crust (2$)\n");
	printf("\nEnter your choice (1,2 or 3): ");
	scanf("%d", &crust_type);
	
	if (crust_type == 1) {
		total += 0;
	} else if (crust_type == 2) {
		total += 1;
	} else if (crust_type == 3) {
		total += 2;
	} else {
		printf("\nInvalid Crust. Regular selected by default");
	}
	
	printf("\nThe new total cost is: $%d", total);
	
	return 0;
}
