#include<stdio.h>

int main(){
	int class[3][4] = {{85,92,78,90},{88,76,95,84},{90,85,88,92}};
	float class_average;
	
	for(int i=0; i<3; i++){
		int class_sum = 0;
		for(int j=0; j<4; j++){
			class_sum += class[i][j];
		}
		class_average = (float) class_sum/4;
		printf("Class %d Average is: %.2f\n", i+1, class_average);
	}
	
	return 0;
}
