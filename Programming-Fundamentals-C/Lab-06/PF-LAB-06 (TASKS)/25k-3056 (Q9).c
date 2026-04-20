/* Sarah wants to track her monthly expenses more efficiently. She needs a program that can handle
multiple expense categories and provide detailed financial analysis */

#include<stdio.h>

int main(){
	float m_income;
	printf("Enter monthly income: ");
	scanf("%f", &m_income);
	float food, transport, entertainment, utilities;
	
	printf("Enter monthly expense of food: ");
	scanf("%f", &food);
	printf("Enter monthly expense of transport: ");
	scanf("%f", &transport);
	printf("Enter monthly expense of entertainment: ");
	scanf("%f", &entertainment);
	printf("Enter monthly expense of utilities: ");
	scanf("%f", &utilities);
	
	float total_expense = food + transport + entertainment + utilities;
	float r_balance = m_income - total_expense;
	printf("\nTotal expenses: %.2f\n", total_expense);
	printf("\nRemaining balance: %.2f", r_balance);
	
	float savings_percent = (r_balance / m_income) * 100;
    
	float food_percent = (food / total_expense) * 100;
    float transport_percent = (transport / total_expense) * 100;
    float entertainment_percent = (entertainment / total_expense) * 100;
    float utilities_percent = (utilities / total_expense) * 100;
    
    printf("\n\nExpense Breakdown:");
    printf("\nFood: %.2f%%", food_percent);
    printf("\nTransport: %.2f%%", transport_percent);
    printf("\nEntertainment: %.2f%%", entertainment_percent);
    printf("\nUtilities: %.2f%%", utilities_percent);
    
	if(savings_percent>20){
		printf("\nExcellent savings!");
	}
	else if(food_percent>40 || transport_percent>40 || entertainment_percent>40 || utilities_percent>40){
		printf("\nWarning: High spending in %d", food_percent || transport_percent|| entertainment_percent || utilities_percent);
	}
	else if(total_expense>m_income){
		printf("\nYou are overspending!");
	}
	return 0;
}
