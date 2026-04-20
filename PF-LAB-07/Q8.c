/*8. Write a program that reads a string using scanf("%[^A-Za-z]",str); so that it accepts and stores all characters
except alphabets. The program should then display the entered non-alphabetic characters on the screen.*/

#include<stdio.h>

int main(){
    char str[100];
    
    printf("User input: ");
    scanf("%[^A-Za-z]", str);
    
    printf("\nNon-alphabetical characters: %s", str);
    
	return 0;
}

