#include<stdio.h>

int main(){
	int arr[3][3] = {{1,0,1},{0,0,1},{1,1,0}};
	int count=0, row_num, seat_num;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			
		    if(arr[i][j]==0){
		    	count++;
			}
		}
	}
	printf("Total number of available seats: %d\n", count);
	printf("Available seats:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		    if(arr[i][j]==0){
		    	printf("Row: %d, seat: %d\n", i+1, j+1);
			}
		}
	}
	return 0;
}
