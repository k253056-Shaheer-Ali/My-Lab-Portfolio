//Write a C program that takes an integer input from the user and checks whether It is a prime number or not.

#include <stdio.h>

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	int i;
	int prime=1;
	for(i=2; i<num; i++)
	{
		if(num%i==0){
			prime=0;
			break;
		}
	}
	if(num==1){
		printf("neither prime nor composite");
	}
	else if(prime==1){
		printf("prime");
	}
	else{
		printf("composite");
	}
	
	return 0;
}
