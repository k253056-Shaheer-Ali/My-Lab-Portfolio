#include<stdio.h>

int main(){
	int o_image[4][4] = {{1,0,1,0},{0,1,0,1},{1,1,0,0},{0,0,1,1}};
	int n_image[4][4];
	
	//Display the original image
	printf("-----ORIGINAL IMAGE-----\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("%d  ",o_image[i][j]);
		}
		printf("\n");
	}
	
	//Create an inverted version (negative) of the image where white becomes black and black becomes white
	printf("\n-----NEGATIVE IMAGE-----\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			
			if(o_image[i][j]==1){
				n_image[i][j] = 0;
				continue;
			}
			if(o_image[i][j]==0){
				n_image[i][j] = 1;
			}
		}
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("%d  ",n_image[i][j]);
		}
		printf("\n");
	}


    //Display both images side by side
    printf("\n-----ORIGINAL IMAGE-----      -----NEGATIVE IMAGE-----\n");
    for(int i=0; i<4; i++){
    	printf("       ");
    	for(int j=0; j<4; j++){
    		printf("%d  ", o_image[i][j]);
		}
		
		printf("                  ");
		for(int j=0; j<4; j++){
			printf("%d  ", n_image[i][j]);
		}

		printf("\n");
	}
    
    
    //Count how many white pixels are in the original image
    int count = 0;
    printf("\nORIGINAL IMAGE (white pixels)\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(o_image[i][j]==1){
				count++;
			}
		}
	}
	printf("White Pixels: %d", count);
	return 0;
}
