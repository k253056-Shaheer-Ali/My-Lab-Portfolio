/* Ask the user to choose a pizza size: 1.Small, 2.Medium, 3.Large. Print the chosen size. If they
choose wrong, print "Invalid size" */

#include <stdio.h>

int main(void){
    int size;
    
    printf("Select a Pizza size:\n");
    printf("1. Small\n2. Medium\n3. Large\n");
    printf("Enter your choice(1, 2, or 3): ");
    scanf("%d", &size);
    
switch (size){
    case 1: printf("Small Pizza");
    break;
    case 2: printf("Medium Pizza");
    break;
    case 3: printf("Large Pizza");
    break;
    default: printf("Invalid Size");
    break;
}

    return 0;
}
