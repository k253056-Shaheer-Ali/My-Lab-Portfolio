#include<stdio.h>
#include<string.h>

int main() {
 
    char word[4][10] = {"Apple", "Grapes", "Kiwi", "Orange"};
    
    for(int i=0; i<4; i++){
		printf("\n");
    	puts(word[i]);
		printf("length: %d\n\n", strlen(word[i]));
		strcpy(word[1], "Lychee");   
		
		for(int j=0; word[i][j]!='\0'; j++){
			printf("%c\n", word[i][j]);
		}
	}
    
    return 0;
}


