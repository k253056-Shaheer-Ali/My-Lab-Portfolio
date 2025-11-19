#include <stdio.h>
#include <string.h>

int main(){
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};

    char courses[4][5][20] = {              // courses[student][course][chars]
        {"Math", "Physics", "Chemistry"},                 
        {"English", "History"},                           
        {"Biology", "Math", "Physics", "Computer"},       
        {"Economics", "Math", "Physics", "Chemistry", "Biology"} 
    };

    int courseCount[4] = {3, 2, 4, 5};   //for each student

    // 1. Show each student's registered courses
    printf("REGISTERED COURSES:\n");
    printf("-------------------\n");
    for(int i=0; i<4; i++){
    	printf("%-8s: ", students[i]);
    	
    	for(int j=0; j < courseCount[i]; j++){
    		printf("%-10s  ", courses[i][j]);
		}
		printf("\n");
	}
    
    // 2. Find students taking a specific course
    char search[20];
    printf("\nEnter course to search: ");
    scanf("%s", search);
    
    printf("\nSTUDENTS TAKING %s:\n", search);
    printf("-------------------\n");
    for(int i=0; i<4; i++){
    	for(int j=0; j < courseCount[i]; j++){
    		if(strcmp(courses[i][j], search) == 0){
    			printf("%s\n", students[i]);
    			break;
			}
		}
	}

    // 3. Identify overloaded students (>3 courses)
    printf("\nOVERLOADED STUDENTS:\n");
    printf("----------------------\n");
    for(int i=0; i<4; i++){
        if(courseCount[i] > 3){
            printf("%s (%d courses)\n", students[i], courseCount[i]);
        }
    }

    return 0;
}
























// manual count finding:
/*
int courseCount[4];  // will be filled automatically

for (int i = 0; i < 4; i++) {
    int count = 0;
    for (int j = 0; j < 5; j++) {
        if (strcmp(courses[i][j], "") != 0) {  // not empty
            count++;
        } else {
            break;  // stop when empty string found
        }
    }
    courseCount[i] = count;
}
*/
