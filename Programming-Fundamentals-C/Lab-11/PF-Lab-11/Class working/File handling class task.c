#include<stdio.h>
#include<string.h>

int main() {

    FILE *fptr;

    fptr = fopen("demo.txt", "w+"); // write + read mode
    if (fptr == NULL) {
        printf("File not found");
        return 1;
    }

    // WRITE
    fputc('a', fptr);
    fputs("\nThis is string\n", fptr);

    int id;
    printf("Enter ID: ");
    scanf("%d", &id);
    fprintf(fptr, "ID: %d\n", id);

    char name[20];
    printf("Enter Name: ");
    getchar(); // remove leftover newline
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    fprintf(fptr, "Name: %s\n", name);

    printf("File updated successfully\n\n");

    // READ
    rewind(fptr); // IMPORTANT

    char c;
    while ((c = fgetc(fptr)) != EOF) {
        printf("%c", c);
    }

    fclose(fptr);
    return 0;
}

