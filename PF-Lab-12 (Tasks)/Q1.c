#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("Enter size of an integer array: ");
	scanf("%d", &n);
	
	int* ptr = (int*) malloc(n * sizeof(int));
	
	if(ptr == NULL){
		printf("Memory allocation failed!\n");
		return 1;
	}
	
	printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++){
        printf("Element %d: ", i+1);
        scanf("%d", &ptr[i]);
    }
	
	printf("\nArray elements: ");
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n");
	
	free(ptr);
	return 0;
}
