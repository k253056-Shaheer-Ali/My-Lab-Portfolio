#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    printf("Enter email: ");
    scanf("%s", email);

    int index = -1;
    for (int i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') {
            index = i;
            break;
        }
    }

    if(index == -1 || email[index + 1] == '\0'){
        printf("Domain: Invalid email\n");
    } 
	else{
        printf("Domain: ");
        for(int j = index+1; email[j] != '\0'; j++){
            printf("%c", email[j]);
        }
        printf("\n");
    }

    return 0;
}

