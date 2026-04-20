//Write a C program that takes an integer input from the user and displays the number in reverse order.

#include<stdio.h>

int main(){
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	int last, r=0;
	while(n>0){   
		last = n % 10;
		r = (r*10) + last;
		
		n = n / 10;
	}
	printf("%d", r);
	return 0;
}
