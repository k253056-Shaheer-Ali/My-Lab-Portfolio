#include <stdio.h>
#include <string.h>
#include <time.h>

struct Employee {
    int id;
    char name[50];
    char department[20];
    char designation[20];
    float salary;
    char dateOfJoining[11]; // YYYY-MM-DD
    char phone[15];
    char email[50];
    int yearsExperience; // calculated field
};

// Function to calculate years of experience
int calculateExperience(char dateOfJoining[]) {
    int y, m, d;
    sscanf(dateOfJoining, "%d-%d-%d", &y, &m, &d);

    time_t t = time(NULL);
    struct tm current = *localtime(&t);

    int years = (current.tm_year + 1900) - y;

    if ((current.tm_mon + 1 < m) ||
       ((current.tm_mon + 1 == m) && (current.tm_mday < d))) {
        years--;
    }
    return years;
}

// Display function
void displayEmployee(struct Employee e) {
    printf("\nID: %d", e.id);
    printf("\nName: %s", e.name);
    printf("\nDepartment: %s", e.department);
    printf("\nDesignation: %s", e.designation);
    printf("\nSalary: %.2f", e.salary);
    printf("\nDate of Joining: %s", e.dateOfJoining);
    printf("\nPhone: %s", e.phone);
    printf("\nEmail: %s", e.email);
    printf("\nExperience: %d years\n", e.yearsExperience);
}

// Department-wise salary statistics
void departmentSalaryStats(struct Employee employees[], int n) {
    float total[5] = {0}; 
    int count[5] = {0};
    char *departments[] = {"IT","HR","Finance","Marketing","Operations"};

    for(int i=0;i<n;i++) {
        int idx=-1;
        for(int j=0;j<5;j++) {
            if(strcmp(employees[i].department, departments[j])==0) {
                idx=j; break;
            }
        }
        if(idx!=-1) {
            total[idx]+=employees[i].salary;
            count[idx]++;
        }
    }

    printf("\n--- Department Salary Statistics ---\n");
    for(int j=0;j<5;j++) {
        if(count[j]>0)
            printf("%s: Avg Salary = %.2f\n", departments[j], total[j]/count[j]);
    }
}

// Annual appraisal with increment
void annualAppraisal(struct Employee *e, int performancePercent) {
    if(performancePercent < 5) performancePercent = 5;
    if(performancePercent > 15) performancePercent = 15;
    e->salary += e->salary * performancePercent / 100.0;
}

// Search functions
void searchByDepartment(struct Employee employees[], int n, char dept[]) {
    printf("\n--- Employees in %s ---\n", dept);
    for(int i=0;i<n;i++) {
        if(strcmp(employees[i].department, dept)==0)
            displayEmployee(employees[i]);
    }
}

void searchByDesignation(struct Employee employees[], int n, char desig[]) {
    printf("\n--- Employees with designation %s ---\n", desig);
    for(int i=0;i<n;i++) {
        if(strcmp(employees[i].designation, desig)==0)
            displayEmployee(employees[i]);
    }
}

void searchByExperience(struct Employee employees[], int n, int years) {
    printf("\n--- Employees with >= %d years experience ---\n", years);
    for(int i=0;i<n;i++) {
        if(employees[i].yearsExperience >= years)
            displayEmployee(employees[i]);
    }
}

// Promotion eligibility (>3 years)
void promotionEligibility(struct Employee employees[], int n) {
    printf("\n--- Employees Eligible for Promotion ---\n");
    for(int i=0;i<n;i++) {
        if(employees[i].yearsExperience > 3)
            displayEmployee(employees[i]);
    }
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for(int i=0;i<n;i++) {
        printf("\nEnter details for Employee %d\n", i+1);
        printf("ID: "); scanf("%d", &employees[i].id);
        printf("Name: "); scanf(" %[^\n]", employees[i].name);
        printf("Department (IT/HR/Finance/Marketing/Operations): "); scanf("%s", employees[i].department);
        printf("Designation (Intern/Junior/Senior/Manager/Director): "); scanf("%s", employees[i].designation);
        printf("Salary: "); scanf("%f", &employees[i].salary);
        printf("Date of Joining (YYYY-MM-DD): "); scanf("%s", employees[i].dateOfJoining);
        printf("Phone: "); scanf("%s", employees[i].phone);
        printf("Email: "); scanf("%s", employees[i].email);

        employees[i].yearsExperience = calculateExperience(employees[i].dateOfJoining);
    }

    // Demo features
    departmentSalaryStats(employees, n);
    searchByDepartment(employees, n, "IT");
    searchByDesignation(employees, n, "Manager");
    searchByExperience(employees, n, 5);
    promotionEligibility(employees, n);

    // Example appraisal
    annualAppraisal(&employees[0], 10);
    printf("\nAfter appraisal:\n");
    displayEmployee(employees[0]);

    return 0;
}

