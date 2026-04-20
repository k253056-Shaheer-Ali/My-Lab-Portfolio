#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of first array: ");
    scanf("%d", &n);

    int *arr = (int*)calloc(n, sizeof(int)); 
    printf("First array after calloc:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; 
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}

