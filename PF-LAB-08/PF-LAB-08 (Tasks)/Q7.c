#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        int count = 2 * i + 1;

        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }
        for (int k = 0; k < count; k++) {
            printf("* ");
        }


        int spaceAfterStars = (rows - i - 1) * 2 + count * 2;
        while (spaceAfterStars < 18) {
            printf(" ");
            spaceAfterStars++;
        }
        printf("| ");


        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }
        for (int k = 1; k <= count; k++) {
            printf("%d ", k);
        }

 
        int spaceAfterNums = (rows - i - 1) * 2 + count * 2;
        while (spaceAfterNums < 18) {
            printf(" ");
            spaceAfterNums++;
        }
        printf("| ");

   
        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }
        for (int k = 0; k < count; k++) {
            printf("%c ", 'A' + k);
        }
        
        printf("\n");
    }

    return 0;
}

