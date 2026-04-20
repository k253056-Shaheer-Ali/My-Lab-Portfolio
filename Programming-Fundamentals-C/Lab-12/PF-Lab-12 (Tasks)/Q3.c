#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int marks;
} Student;

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student *students = (Student*)malloc(n * sizeof(Student));
    if(students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name);
        printf("Enter marks of %s: ", students[i].name);
        scanf("%d", &students[i].marks);
    }

    printf("\nStudents scoring more than 75:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > 75) {
            printf("%s: %d\n", students[i].name, students[i].marks);
        }
    }

    free(students);
    return 0;
}

