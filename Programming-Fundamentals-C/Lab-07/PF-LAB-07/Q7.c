/*7. You are working in a data management department where you are asked to remove duplicate entries from a
list of recorded IDs. Write a program that takes 10 integers from the user and stores them in an array. The
program should replace every duplicate element (after its first occurrence) with -1 to mark it as a duplicate
and then display the final updated array on the screen.
Example: Input--> 2 3 5 3 5 9 1 2 8 1 --> Output--> 2 3 5 -1 -1 9 1 -1 8 -1 */

#include<stdio.h>

int main(){
    int arr[10], i,j; 
    printf("\nInput--> ");
    for(i=0; i<10; i++){
    	scanf("%d", &arr[i]);
	}

    //Using separate loops as nested loops are not allowed
    for(j=1; j<10; j++){
        if(arr[0]==arr[j]) arr[j]=-1;
	}
    for(j=2; j<10; j++){
    	if(arr[1]==arr[j]) arr[j]=-1;
	}
    for(j=3; j<10; j++){
    	if(arr[2]==arr[j]) arr[j]=-1;
	}
	for(j=4; j<10; j++){
    	if(arr[3]==arr[j]) arr[j]=-1;
	}
	for(j=5; j<10; j++){
    	if(arr[4]==arr[j]) arr[j]=-1;
	}
	for(j=6; j<10; j++){
    	if(arr[5]==arr[j]) arr[j]=-1;
	}
	for(j=7; j<10; j++){
    	if(arr[6]==arr[j]) arr[j]=-1;
	}
	for(j=8; j<10; j++){
    	if(arr[7]==arr[j]) arr[j]=-1;
	}
	for(j=9; j<10; j++){
    	if(arr[8]==arr[j]) arr[j]=-1;
	}
	
	printf("Output--> ");
	for(int i=0; i<10; i++){
    	printf("%d ",arr[i]);
	}
	
	return 0;
}

