/* Between 11 AM and 2 PM, there's a 10% discount. Ask for the current time (0-23). If the time is
between 11 and 14, apply the discount. Print the discounted total. */

#include <stdio.h>

int main(void){
	float total = 11.5;  //assume order already 11.5$
	float discount_total = 0.0f;
	int time;
	
	printf("Enter the current time (0-23): ");
	scanf("%d", &time);
	
	if (time >= 11 && time < 14) {
		printf("You got a 10%% discount!\n");
	    discount_total = total - (total * 0.10);
	}
	
	printf("The discounted total is: $%.2f\n", discount_total);
	
	return 0;
}
