#include<stdio.h>

int main(){
	int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{91,10,11,12}};   
    
	int max=matrix[0][0];
    int x=0, y=0;
    
    for(int i=0; i<3; i++){
    	for(int j=0; j<4; j++){
    		printf("%3d ", matrix[i][j]);
    		
    		if(max<matrix[i][j]){
    			max = matrix[i][j];
    			x = i;
				y = j; 
			}
		}
		printf("\n");
	}
	
	printf("\nMax element: %d", max);
	printf("\nIndex of max element: (%d,%d)", x,y);
	return 0;
}
