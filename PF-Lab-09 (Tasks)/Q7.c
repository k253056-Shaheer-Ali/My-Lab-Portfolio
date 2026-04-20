#include<stdio.h>

float rental_cost();

int main(){
    printf("Final rental cost: %.2f", rental_cost());
	return 0;
}

float rental_cost(){
	int days;
	float km;
	printf("Enter rental days: ");
	scanf("%d", &days);
	printf("Enter km's driven: ");
	scanf("%f", &km);
	
	float baseRate, extraMileage=0, discount=0;
	baseRate = days * 40;
	if(km > 100){
		extraMileage = days * (km-100) * 0.25;
	}
	if(days > 7){
		discount = baseRate * 0.1;
	}
	
	float total = baseRate + extraMileage - discount;
	return total;
}
