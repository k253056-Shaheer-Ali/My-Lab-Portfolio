/*6. You are assisting your English language teacher who wants to analyze how many vowels and consonants
appear in student's submitted words. Write a program that reads a single word using scanf("%s",str); and
counts the number of vowels and consonants in it without using any string library functions like strlen(). The
program should display both counts on the screen.*/

#include<stdio.h>

int main(){
	char str[50];
	printf("Enter a word: ");
	scanf("%s",str);
	
	//char vowels[11] = {'A','a','E','e','I','i','O','o','U','u'};
	//I am not using vowels[11] because nested loops are not allowed
	
	int vowel=0, consonant=0;
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' ||str[i]=='U' || str[i]=='u'){
			vowel++;
		}
	    else{
	    	consonant++;
		}
	}
	
	printf("Number of Vowels = %d\n",vowel);
	printf("Number of Consonants = %d",consonant);
	return 0;
}

