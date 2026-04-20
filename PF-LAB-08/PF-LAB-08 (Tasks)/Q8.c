#include<stdio.h>

int main(){
	int classroom[5][5];
	
	printf("Classroom Seating Chart:\n");
	printf("========================\n");
	printf("(x = Student, o = Empty)\n\n");
	
	int countx=0, counto=0;
	for(int i=0; i<5; i++){
		printf("Row %d:",i+1);
		for(int j=0; j<5; j++){
			
			if( (i+j)%2 == 0){
				classroom[i][j] = 'x';
				countx++;
			}
			else{
				classroom[i][j] = 'o';
				counto++;
			}
			printf(" %c", classroom[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSummary:\n");
	printf("Students seated: %d\n", countx);
	printf("Empty desks: %d\n", counto);
	printf("Total desks: %d", countx + counto);
	return 0;
}
