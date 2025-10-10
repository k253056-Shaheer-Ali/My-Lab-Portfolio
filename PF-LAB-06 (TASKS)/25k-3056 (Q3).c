//Write a C program to input a number and find sum of first and last digit of the number using for loop.

#include<stdio.h>

int main(){
	int num;
	printf("Input a number: ");
	scanf("%d", &num);
	
	if (num < 0) {
        num = -num;       // Handle negative numbers
    }

	int last_digit = num % 10;
	int first_digit;              
	for(first_digit=num; first_digit>=10 ; first_digit=first_digit/10)   
	{    //loop keep dividing till first digit left
	}
	
	int sum;
	if(num<10){
		sum = num;
	}
	else{
		sum = first_digit + last_digit;
	}
	printf("Sum: %d", sum);
	
	return 0;
}
