#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks[3], percent;
    char grade[4];
};

int main() {
    int n;
    printf("Number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input
    for(int i=0; i<n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: "); scanf(" %[^\n]", s[i].name);
        printf("Roll: "); scanf("%d", &s[i].roll);

        float total = 0;
        for(int j=0; j<3; j++) {
            do {
                printf("Marks in Subject %d (0-100): ", j+1);
                scanf("%f", &s[i].marks[j]);
            } while(s[i].marks[j] < 0 || s[i].marks[j] > 100);
            total += s[i].marks[j];
        }

        s[i].percent = total / 3.0;

        if(s[i].percent >= 90) strcpy(s[i].grade, "A+");
        else if(s[i].percent >= 80) strcpy(s[i].grade, "A");
        else if(s[i].percent >= 70) strcpy(s[i].grade, "B+");
        else if(s[i].percent >= 60) strcpy(s[i].grade, "B");
        else if(s[i].percent >= 50) strcpy(s[i].grade, "C");
        else strcpy(s[i].grade, "F");
    }

    // Search by grade
    char searchGrade[4];
    printf("\nEnter grade to search: ");
    scanf("%s", searchGrade);

    printf("Students with grade %s:\n", searchGrade);
    for(int i=0; i<n; i++) {
        if(strcmp(s[i].grade, searchGrade) == 0)
            printf("- %s (Roll: %d, %.2f%%)\n", s[i].name, s[i].roll, s[i].percent);
    }

    // Class average
    float sum = 0;
    for(int i=0; i<n; i++) sum += s[i].percent;
    float avg = sum / n;
    printf("\nClass average: %.2f%%\n", avg);

    printf("Above average: ");
    for(int i=0; i<n; i++) if(s[i].percent > avg) printf("%s ", s[i].name);

    printf("\nBelow average: ");
    for(int i=0; i<n; i++) if(s[i].percent < avg) printf("%s ", s[i].name);

    // Ranking
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(s[j].percent < s[j+1].percent) {
                struct Student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("\n\n--- Student Ranks ---\n");
    for(int i=0; i<n; i++) {
        printf("Rank %d: %s (Roll %d) - %.2f%% [%s]\n",
               i+1, s[i].name, s[i].roll, s[i].percent, s[i].grade);
    }

    return 0;
}

