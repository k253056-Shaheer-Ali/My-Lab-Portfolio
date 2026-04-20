//Write a C program to print all natural numbers in reverse from n to 1 using for loop

#include<stdio.h>

int main(void){
	int i, n;
	printf("Enter a positive number: ");
	scanf("%d", &n);
	
	if(n<=0){
		printf("Invalid Input");
	}
	
	for(i=n; i>=1 ; i--)
	{
		printf("%d ", i);
	}
	
	return 0;
}
