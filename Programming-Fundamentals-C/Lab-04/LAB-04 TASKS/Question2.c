/* A small pizza costs $8. Ask how many pizzas they want. If they want more than one, print
"Check our multi-pizza deals." Otherwise, print "Your total is $8." */

#include <stdio.h>
 
 int main(void){
 	int quantity;
 	
 	printf("How many Pizza(s) you want?: ");
 	scanf("%d", &quantity);
 	
 	if (quantity > 1){
 		printf("Check our multi-pizza deals!");
	 }
	else{
		printf("Your total is: $8");
	 }
 	
 	return 0;
 }
