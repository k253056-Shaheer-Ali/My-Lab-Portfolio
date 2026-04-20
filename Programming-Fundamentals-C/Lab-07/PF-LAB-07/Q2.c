/*2. Write a program that reads the 10 numbers from user and store these numbers into an array of same size.
You program should provide a searching mechanism in such a way that how many times a particular number
occurred and then print it on screen. If number is not in array, then program should display a message
“number not found”.*/

#include<stdio.h>

int main(){
    int arr[10],num;
    
    for(int i=0; i<10; i++){
    	printf("Enter number %d: ", i+1);
    	scanf("%d", &arr[i]);
	}
	
	printf("\n-----Search Engine-----");
	printf("\nEnter number you are looking for: ");
	scanf("%d",&num);
	
	int found=0;   
	for(int j=0; j<10; j++){      
		if(arr[j]==num){
			found = 1;
			printf("\nRepeated number is: %d", arr[j]);
			break;
		}
    }
    
    if(found){
		printf("\nNumber Found Successfully");
	}
	else{
		printf("\nNumber not found!");
	}
	return 0;
}

