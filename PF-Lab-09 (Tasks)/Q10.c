#include<stdio.h>

int main(){
    int grid[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    
    int *ptr1 = &grid[0][0];
    printf("1. First element: %d\n", *ptr1);
    
    printf("2. Specific positions from ptr1:\n");
    printf("   ptr1 + 2: %d\n", *(ptr1 + 2));  
    printf("   ptr1 + 5: %d\n", *(ptr1 + 5));    
    printf("   ptr1 + 8: %d\n", *(ptr1 + 8));    
    
    int *ptr2 = &grid[1][0];
    printf("3. Start of second row: %d\n", *ptr2);
    
    printf("4. Indexing from second row:\n");
    printf("   ptr2[0]: %d\n", ptr2[0]);  
    printf("   ptr2[1]: %d\n", ptr2[1]);   
    printf("   ptr2[-1]: %d\n", ptr2[-1]);  
    printf("   ptr2[-2]: %d\n", ptr2[-2]);  
    

    printf("5. Numbers divisible by 3:\n");
    int *scanPtr = &grid[0][0];
    for(int i = 0; i < 12; i++) {
        if(*(scanPtr + i) % 3 == 0) {
            printf("   Position %d: %d\n", i, *(scanPtr + i));
        }
    }
    
    printf("6. Last element methods:\n");
    printf("   Normal: grid[2][3] = %d\n", grid[2][3]);
    printf("   Pointer: *(ptr1 + 11) = %d\n", *(ptr1 + 11));
    
    return 0;
}
