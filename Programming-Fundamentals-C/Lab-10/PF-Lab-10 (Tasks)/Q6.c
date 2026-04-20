#include<stdio.h>
#include<string.h>

int main(){
    char names[5][20] = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    int marks[5] = {85, 92, 78, 96, 88};
    
    int sum = 0, max = marks[0], index;
    float avg;
    
    for(int i=0; i<5; i++){
        sum += marks[i];
        
        if(max < marks[i]){
            max = marks[i];
            index = i;
        }
    }
    
  
    printf("=== STUDENT RESULTS ===\n");
    printf("%-15s %s\n", "Name", "Marks");
    printf("---------------------\n");
    for(int i = 0; i < 5; i++){
        printf("%-15s %d\n", names[i], marks[i]);
    }
    printf("\n");
    
    printf("Highest Scorer: %s with %d marks\n", names[index], marks[index]);
    printf("Average Marks: %.2f", (float)sum/5);
    
    return 0;
}
