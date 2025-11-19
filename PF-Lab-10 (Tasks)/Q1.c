#include<stdio.h>
#include<string.h>

int main(){
	int strength = 0;
	char password[50];
	printf("Enter password: ");
	scanf("%s", password);
	
	//1. At least 8 characters 
	/*int count=0;
	for(int i=0; i<50; i++){
		if(password[i] != '\0'){
			count++;
		}
		else break;
	}
	if(count==8){
		strength++;
	}*/
	
	int length = strlen(password);
	if(length >= 8){
		printf("\nLength check passed.");
		strength++;
	}
	
	
	//2. At least one uppercase letter
	int hasLetter = 0;
	for(int i=0; i<length; i++){
		if(password[i] >= 'A' && password[i] <= 'Z'){
			hasLetter = 1;
			break;	
		}
	}
	if(hasLetter==1){
		printf("\nUppercase check passed.");
		strength++;
	}
	
	
	//3. At least one digit
	int hasDigit = 0;
	for(int i=0; i<length; i++){
		if(password[i] >= '0' && password[i] <= '9'){
			hasDigit = 1;
			break;
		}
	}
	if(hasDigit==1){
		printf("\nDigit check passed.");
		strength++;
	}
	
	
	//4. At least one special character(!, @, #, $, %)
	int hasSC = 0;
	for(int i=0; i<length; i++){
		if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='%'){
			hasSC = 1;
			break;
		}
	}
	if(hasSC==1){
		printf("\nSpecial character check passed.");
		strength++;
	}
	
	
	// Assume password strength: 
	//1=weak, 2=moderate, 3=strong, 4=very strong
	printf("\n\nStrength: ");
	if(strength==1){
		printf("Weak!");
	}
	else if(strength==2){
		printf("Moderate!");
	}
	else if(strength==3){
	    printf("Strong!");
	}
	else if(strength==4){
		printf("Very strong!");
	}
	else{
		printf("No strength criteria met.");
	}
	
	return 0;
}
