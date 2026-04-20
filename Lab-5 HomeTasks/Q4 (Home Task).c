#include <stdio.h>

int main(void) {
	//assuming stored credentials(username:ali and password:123) in database are:
	char stored_user1 = 'a';
	char stored_user2 = 'l';
	char stored_user3 = 'i';
	char stored_pass1 = '1';
	char stored_pass2 = '2';
	char stored_pass3 = '3';
	
	char user_ch1, user_ch2, user_ch3;
	char pass_ch1, pass_ch2, pass_ch3;
	
	printf("Enter username: ");
	scanf(" %c", &user_ch1);
	scanf(" %c", &user_ch2);
	scanf(" %c", &user_ch3);
	
	printf("Enter password: ");
	scanf(" %c", &pass_ch1);
	scanf(" %c", &pass_ch2);
	scanf(" %c", &pass_ch3);
	
	if (stored_user1==user_ch1 && stored_user2==user_ch2 && stored_user3==user_ch3){
		if (stored_pass1==pass_ch1 && stored_pass2==pass_ch2 && stored_pass3==pass_ch3){
			printf("\nLogin Successful!");
		}
		else{
			printf("Incorrect password!");
		}
	}
	else{
		printf("\nUsername not found!");
    }

	return 0;
}

