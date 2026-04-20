#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("How many integers to be allocated in heap: ");
	scanf("%d", &n);
	
	printf("========= Malloc Demonstration =========\n");
	//Malloc function syntax
	int *ptr = (int*) malloc(n * sizeof(int));
	
	for(int i=0; i<n; i++){
		printf("ptr[%d] = %d", i, *(ptr+i));  //ptr[i] or *(ptr+i)
		printf("\n");
	}
	
	
    printf("\n========= Calloc Demonstration =========\n");
	//Calloc function syntax
	int *ptr1 = (int*) calloc(n * sizeof(int));
	
	for(int j=0; j<n; j++){
		printf("ptr[%d] = %d", j, ptr1[j]);  //ptr[i] or *(ptr+i)
		printf("\n");
	}
	
	printf("\n========= Realloc Demonstration =========\n");
	
	
	return 0;
}
