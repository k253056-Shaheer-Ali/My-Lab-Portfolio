//structure is a user defined data-type , to use multiple datatypes

#include<stdio.h>
#include<string.h>

struct dob{
		int days;
		char month[20];
		int year;	
};

struct Student{
	int id;
	char name[20];
	float marks;
	float gpa;
	
	struct dob d1;
};

int main(){ 
    struct Student s1 = {123, "Sherry", 79.9, 3.5};  //s1 ke andar structure ki saari values mujoood hein  //struct student is type
	printf("%d, %s, %.2f, %.2f", s1.id, s1.name, s1.marks, s1.gpa);
    
    struct dob d1 = {28, "June", 2005};
    printf("\nStudent DOB: %d, %s, %d", d1.days, d1.month, d1.year);
    
    //nested printing:
    printf("\n%d, %s, %.2f, %.2f", s1.d1.days, s1.d1.month, s1.d1.year)
    return 0;
}

