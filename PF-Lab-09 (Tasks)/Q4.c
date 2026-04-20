#include<stdio.h>

float total_cost();
int main(){
    float cost = total_cost();
    printf("Total cost: $%.2f", cost);
	return 0;
}

float total_cost(){
	float amount, weight;
	printf("Enter order amount($): ");
	scanf("%f", &amount);
	printf("Enter package weight(kg): ");
	scanf("%f", &weight);
	
	float shipping;
	
	if(amount > 100){
		shipping = 0;
	}
	else if(amount <= 100){
		if(weight < 2){
			shipping = 10;
		}
		else if(weight>=2 && weight<=5){
			shipping = 15;
		}
		else{
			shipping = 20;
		}
	}
	
	return (amount+shipping);
}
