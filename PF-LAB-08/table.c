//Multiplication Table

#include<stdio.h>

int main(){
	int t;
	printf("Enter how many tables you want to print: ");
	scanf("%d",&t);
	for(int i=1; i<=t; i++){
	    printf("%d --->",i);
		for(int j=1; j<=10; j++){
			int table;
		    printf("%4d", table=i*j);
		}
		printf("\n");
	}
	return 0;
}
