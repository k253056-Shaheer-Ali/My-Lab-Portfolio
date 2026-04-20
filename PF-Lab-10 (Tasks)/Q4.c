#include<stdio.h>
#include<string.h>

int main(){
	char message[] = "Meet me at the park tomorrow";
	char encrypted[100], decrypted[100];
	
	printf("\nOriginal: ");
	for(int i=0; i<strlen(message); i++){
	    printf("%c", message[i]);
	}
	
	printf("\nEncrypted: ");
	for(int i=0; i<strlen(message); i++){
		char ch = message[i];
		
		if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
			encrypted[i] = ch + 3;  
            printf("%c", encrypted[i]);  
		}
		else{
			encrypted[i] = ch;  
            printf("%c", encrypted[i]); 
		}
	}
	encrypted[strlen(message)] = '\0';
	
	printf("\nDecrypted: ");
	for(int i=0; i<strlen(message); i++){
		char ch = encrypted[i];
		
		if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
			decrypted[i] = ch - 3; 
            printf("%c", decrypted[i]); 
		}
		else{
			decrypted[i] = ch; 
            printf("%c", decrypted[i]); 
		}
	}
	decrypted[strlen(message)] = '\0';
	
	return 0;
}






/* Other more correct way :

// Encryption with wrapping
if(ch >= 'a' && ch <= 'z'){
    encrypted[i] = 'a' + (ch - 'a' + 3) % 26;
}

// Decryption with wrapping  
if(ch >= 'a' && ch <= 'z'){
    decrypted[i] = 'a' + (ch - 'a' - 3 + 26) % 26;
    // +26 ensures we don't get negative numbers
}

*/
