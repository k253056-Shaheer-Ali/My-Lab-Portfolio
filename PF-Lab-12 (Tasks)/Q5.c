#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char *concat = (char*)malloc((len1 + len2 + 1) * sizeof(char));

    strcpy(concat, str1);
    strcat(concat, str2);

    printf("Concatenated string: %s\n", concat);

    free(concat);
    return 0;
}

