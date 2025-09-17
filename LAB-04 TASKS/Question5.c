//Ask if they want extra cheese (Y/N). If yes, add $1.50 to the total.

#include <stdio.h>

int main(void){
	float total = 10;    //assuming
	char cheese; 
	
	printf("Do you want extra cheese? (Y/N) : ");
	scanf("%c", &cheese);
	
	if (cheese == 'y' || cheese == 'Y') {
		total += 1.5;
		printf("Extra cheese added.\n");
	} else {
		printf("No extra cheese added.\n");
	}
	
	printf("\nYour new total cost is: $%.2f", total);
		
	return 0;
}
