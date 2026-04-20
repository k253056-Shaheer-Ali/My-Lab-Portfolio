#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("How many integers to be allocated in heap: ");
	scanf("%d", &n);
	
	printf("\n========= Malloc Demonstration =========\n");
	int *ptr = (int*) malloc(n * sizeof(int));
	
	printf("\n---- Values before initializaton ----\n");
	for(int i=0; i<n; i++){
		printf("ptr[%d] : %d\n", i, ptr[i]);
	}
	
	printf("\n---- Initialization ----\n");
	for(int i=0; i<n; i++){
		printf("ptr[%d] : ", i);
		scanf("%d", &ptr[i]);
	}
	
	printf("\n---- Values after initializaton ----\n");
	for(int i=0; i<n; i++){
		printf("ptr[%d] : %d\n", i, ptr[i]);
	}
	
	
	//to free memory
	free(ptr); 
	return 0;
}
