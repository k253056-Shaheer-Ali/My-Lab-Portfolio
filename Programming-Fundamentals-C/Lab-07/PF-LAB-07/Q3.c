/*3. Sir Saif ask you to write a program which can help him in storing your quiz marks for pass students within
range [5-10] will be stored, consider there are 10 students registered in Section BSE-1B. He wants an array of
same size where marks for failed students within range [0-5] are stored. Write a program for the given
scenario. You program should exit if user enters -1 and will display the marks entered along with average of
each array.*/

#include<stdio.h>

int main(){
    int marks[10], pass[10], fail[10];
    int total_entered = 0;
    
    for(int i=0; i<10; i++){
    	printf("Student-%d marks: ", i+1);
        scanf("%d", &marks[i]);
        if(marks[i] == -1) break;
        total_entered++;
	}
	
	int pass_count=0, fail_count=0;
    for(int j=0; j<total_entered; j++){
    	if(marks[j]>=5 && marks[j]<=10){
    		pass[pass_count] = marks[j];
			pass_count++; 
		}
		else{
			fail[fail_count] = marks[j];
			fail_count++;
		}
	}
	
	int p_average=0.0f, f_average=0.0f, pass_sum=0, fail_sum=0;
	if(pass_count > 0){
		printf("\nPassed Student Marks: \n");
		for(int p=0; p<pass_count; p++){
			printf("%d, ", pass[p]);
			pass_sum += pass[p];
	    }
	    float p_average = (float) pass_sum / pass_count; 
	    printf("\nPassed Average: %.2f\n", p_average);
	}
	if(fail_count > 0){
		printf("\nFailed Student Marks: \n");
		for(int f=0; f<fail_count; f++){
			printf("%d, ", fail[f]);
			fail_sum += fail[f];
	    }
	    float f_average = (float) fail_sum / fail_count; 
	    printf("\nFailed Average: %.2f", f_average);
	}
	
	return 0;
}

