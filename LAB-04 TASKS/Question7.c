/*Students get $2 off. Ask if they have a student ID (Y/N). If yes, subtract $2 from the total. Print
the final cost. */

#include <stdio.h>

int main(void){
	float total = 10.5;   //assuming 
	char ID;
	
	printf("Do you have a student ID? (Y/N): \n");
	scanf("%c", &ID);
	
	if (ID == 'Y' || ID == 'y') {
		printf("students get $2 off!\n");
		total = total - 2;
	}
	
	printf("\nFinal cost: $%.2f", total);
	
	return 0;
}


