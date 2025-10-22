/*4. Your class teacher asks you to develop a program that can help in converting mixed-case messages entered
by users. The program should read a sentence using scanf("%[^\n]",str); and then convert all lowercase
letters to uppercase and all uppercase letters to lowercase, without using any string library functions. Finally,
display the converted message back to the user.
Example: Input--> HeLLo WoRLd--> Output--> hEllO wOrlD */
//Note ASCII values:
//'A'=65, 'Z'=90
//'a'=97, 'z'=122
#include<stdio.h>

int main(){
    char str[50];
    printf("User Input: ");
    scanf("%49[^\n]", str);
   
    printf("\nInput: %s", str);
    for(int i=0; str[i]!='\0'; i++){
   	    if(str[i]>='a' && str[i]<='z'){
		   str[i] = str[i] - 32; //lower to uppercase
	    }
	    else if(str[i]>='A' && str[i]<='Z'){
		   str[i] = str[i] + 32; //upper to lowercase	
	    }
    }
   
    printf("\nOutput: %s", str);
    return 0;
}

