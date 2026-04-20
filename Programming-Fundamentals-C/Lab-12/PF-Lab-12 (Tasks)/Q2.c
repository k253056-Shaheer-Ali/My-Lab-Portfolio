#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int size;
    printf("Enter maximum string length: ");
    scanf("%d", &size);
    getchar(); 

    char *str = (char*) malloc((size + 1) * sizeof(char));
    
    if(str == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter a string: ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
    
    int len = strlen(str);
    
    printf("Original: %s\n", str);
    printf("Reversed: ");
    
    for(int i = len - 1; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
    
    free(str);
    return 0;
}
