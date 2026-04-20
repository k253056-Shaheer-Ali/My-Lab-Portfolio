#include <stdio.h>

int main(void){
	int hasPrequisite;
	printf("Do you have a prequisite? (1=yes, 0=no): ");
	scanf("%d", &hasPrequisite);
	
	int isCourseFull;
	printf("Is course full? (1=yes, 0=no): ");
	scanf("%d", &isCourseFull);
	
	if (hasPrequisite==1){
		if(isCourseFull==1){
			printf("\nCannot enroll: course is full\n");
		}
		else if (isCourseFull==0){
			printf("\nEnrolled Successfully!\n");
		}
	}
	else if (hasPrequisite==0){
		if(isCourseFull==1){
			printf("\nCannot enroll: prequisite missing and course is full\n");
		}
		else if (isCourseFull==0){
			printf("\nCannot enroll: prequisite missing\n");
		}
	}
	else{
		printf("\nInvalid Input!\n");
	}
	
	return 0;
}
