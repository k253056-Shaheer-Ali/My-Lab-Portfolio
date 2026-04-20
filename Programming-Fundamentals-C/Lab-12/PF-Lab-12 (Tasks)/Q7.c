#include<stdio.h>
#include<string.h>

int isPalindrome(char string[], int start, int end){
	if(start >= end){
		return 1;
	}
	
	if(string[start] != string[end]){
		return 0;
	}
	isPalindrome(string, start+1, end-1);
	
}
int main(){
	char string[100];
	printf("Enter string: ");
	scanf("%[^\n]", string);
	
	if(isPalindrome(string, 0, strlen(string)-1)){
		printf("Palindrome!");
	}
	else{
		printf("Not a Palindrome!");
	}
	return 0;
}
