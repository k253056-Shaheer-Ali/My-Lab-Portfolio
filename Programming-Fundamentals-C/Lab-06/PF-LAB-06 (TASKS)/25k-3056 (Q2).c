//Write a C program that user performs multiplication and division without using the * and / operators.

#include<stdio.h>

int main(){
	int a,b;
	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);
	
	int i, product=0;
	for(i=1 ; i<=b ; i++)
	{	
		product = product + a;
	}
	
    int quotient=0;
    int dividend=a;
    while(dividend>=b){
    	dividend = dividend - b;      //subtract divisor each time
    	quotient++;                   //counting how many times subtraction happened
	}
	
	printf("Multiplication of %d and %d: %d\n", a,b,product);
	printf("Division of %d and %d: %d", a,b,quotient);
	
	return 0;
}
