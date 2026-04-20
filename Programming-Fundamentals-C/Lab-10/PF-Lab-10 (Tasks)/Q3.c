#include<stdio.h>
#include<string.h>

int main(){
	char text[] = "Text: Hello world 123! Programming is fun";
	int vowels = 0, consonants = 0, digits = 0, spaces = 0, specials = 0;
	
	for(int i=0; i<strlen(text); i++){
		char ch = text[i];
		
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||
                ch=='O'||ch=='o'||ch=='U'||ch=='u') {
                vowels++;
            } else {
                consonants++;
            }
        }
		else if(ch >= '0' && ch <= '9'){ 
		    digits++;
		}
		else if(ch == ' '){
			spaces++;
		}
	}
	
	printf("Statistics:");
	printf("\nVowels: %d", vowels);
	printf("\nConsonants: %d", consonants);
	printf("\nDigits: %d", digits);
	printf("\nSpaces: %d", spaces);
	printf("\nTotal characters: %d", (vowels + consonants + digits + spaces));
	return 0;
}
