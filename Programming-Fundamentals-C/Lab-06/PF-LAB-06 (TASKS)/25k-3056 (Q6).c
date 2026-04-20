//Write a C program that takes an integer input from the user and calculates the sum of its individual digits.

#include<stdio.h>

int main(){
	int n;
	printf("Enter an integer: "); 
	scanf("%d", &n);
	
	int i, last, sum=0;
	while(n>0){
		last = n % 10; 
		sum = sum + last;
		
		n = n / 10;
	}
	printf("Sum: %d", sum);
	
	return 0;
}
