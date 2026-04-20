/*1. Write a C program that takes 5 integers in an array and shifts all elements one position to the right, and
moves the last element to the first position.
Example:
Input --> 1 2 3 4 5
Output--> 5 1 2 3 4
*/
#include<stdio.h>

int main(){
    int arr[5];
    int n = 5;        //size of array according to Q.
    for(int a=0; a<n; a++){
    	printf("Enter element no.%d: ", a+1);
    	scanf("%d", &arr[a]);
	}
	
	int k=1; //shifting/rotating one time
	//step-1: reversing
	for(int i=0,j=n-1; i<j; i++,j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	//step-2: rotate first part
	for(int i=0,j=k-1; i<j; i++,j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	//step-3: rotate second part
	for(int i=k,j=n-1; i<j; i++,j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	
    //Printing
    for(int z=0; z<=4; z++){
    	printf("%d", arr[z]);
	}
	return 0;
}

