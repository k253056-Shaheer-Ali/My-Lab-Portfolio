#include<stdio.h>

float total_bill();

int main(){
    printf("Total Bill: %.2f", total_bill());
	return 0;
}

float total_bill(){
	float food, people;
	printf("Enter food cost($): ");
	scanf("%f", &food);
	printf("Enter no. of people: ");
	scanf("%f", &people);
	
	float tax = food * 0.08;
	float tip, s_charges;
	
    if(food > 50){
    	tip = food * 0.15;
	}
	else{
		tip = food * 0.1;	
	}
	
	if(people > 6){
		s_charges = food * 0.05;
	}
		
	food = food * 0.08;
	float total = food + tax + tip + s_charges;
	return total;
}
