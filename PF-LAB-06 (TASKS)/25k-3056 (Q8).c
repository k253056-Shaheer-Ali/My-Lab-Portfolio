/* Write a C program to check whether a given number is a perfect number. A perfect number is a
positive integer that is equal to the sum of its proper positive divisors, excluding the number
itself */

#include<stdio.h>

int main(){
	//perfect numbers : 6=1+2+3 , 28=1+2+4+7+14
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	int i, sum=0;
	
	for(i=1 ; i<n ; i++)
	{
		if(n%i==0){
		sum = sum + i;
	    }
	}
	if(sum==n){
		printf("Perfect number");
	}
	else{
		printf("Not a perfect number");
	}
	
	return 0;
}
