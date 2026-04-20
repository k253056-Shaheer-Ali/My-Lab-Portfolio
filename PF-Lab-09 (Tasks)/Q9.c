#include<stdio.h>

int main(){
    int var1 = 100;
    int var2 = 200;
    int var3 = 300;
    
    int *ptr1 = &var1; 
    int *ptr2 = &var2;
    int *ptr3 = &var3;
    
    printf("=== Initial values ===\n");
	printf("var1 = %d\n", var1);
    printf("var2 = %d\n", var2); 
    printf("var3 = %d\n", var3);
    
    // first-->second , second-->third, third-->first
    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = ptr3;
    ptr3 = temp;
    
    *ptr1 = *ptr1 + 50;
    *ptr2 = *ptr2 - 75;
    *ptr3 = *ptr3 * 2;
    
    ptr1 = &var3;  
    ptr2 = &var1;  
    ptr3 = &var2;
    
    *ptr1 = *ptr1 + 100;  
    *ptr2 = *ptr2 - 50;  
    *ptr3 = *ptr3 * 3;   
    
    
    printf("\n=== FINAL VALUES ===\n");
    printf("var1 = %d\n", var1);
    printf("var2 = %d\n", var2); 
    printf("var3 = %d\n", var3);
	return 0;
}

