//Write a C program that asks the user for 10 integer values and counts how many are even and how many are odd.

#include<stdio.h>

int main(){
	int i;
	int num;
	int even_count=0, odd_count=0;
	
	for(i=1 ; i<=10 ; i++)
	{
		printf("Enter integer %d: ", i);
		scanf("%d", &num);
		
	  if(num%2==0){
	  	even_count++;
	  }
	  else{
	  	odd_count++;
	  }
	}
	
	printf("Even: %d\n", even_count);
	printf("Odd: %d", odd_count);
	return 0;
}
