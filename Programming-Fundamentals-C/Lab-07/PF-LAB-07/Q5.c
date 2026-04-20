/*5. Write a program that reads 10 integers into an array.
Finds and prints the difference (max - min) between the largest and smallest elements.*/

#include<stdio.h>

int main(){
   int arr[10];
    for(int i=0; i<10; i++){
    	printf("Enter integer %d: ", i+1);
    	scanf("%d", &arr[i]);
	}
	
	int max=arr[0],min=arr[0];
	for(int i=0; i<10; i++){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("difference between the largest and smallest element: %d", max-min);
	return 0;
}

