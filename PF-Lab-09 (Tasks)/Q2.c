#include<stdio.h>

void result();

int main(){
    result();
	return 0;
}

void result(){
    int marks[3], sum = 0;
    
    for(int i=0; i<3; i++){
    	printf("Enter subject-%d marks (0-100): ", i+1);
    	scanf("%d", &marks[i]);
    	sum = sum + marks[i];
	}
	float avg = (float)sum/3;
	
	int allAbove40 = 1;
    for(int k=0; k<3; k++){
        if(marks[k] < 40){
            allAbove40 = 0;
            break;
        }
    }
    
	if(avg >= 50 && allAbove40){
		printf("PASS!");
	    printf("Average: %.2f", avg);
	}
	else{
	    printf("FAIL!");
		printf("Average: %.2f", avg);
		//reasons for failure
        if(avg < 50){
            printf("Reason: Average below 50\n");
        }
        if(!allAbove40){
            printf("Reason: One or more subjects below 40\n");
        }	
	}
	
}
