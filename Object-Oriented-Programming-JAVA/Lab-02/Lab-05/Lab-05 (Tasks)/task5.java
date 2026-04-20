class Student {
    private int ID;
    private String name;
    private double marks;

    //Getters
    public int getID() {
        return ID;
    }
    public String getName() {
        return name;
    }
    public double getMarks() {
        return marks;
    }

    //Constructor
    public Student(int ID, String name, double marks) {
        this.ID = ID;
        this.name = name;
        this.marks = marks;
    }

    //Methods
    public void displayStudentDetails() {
        System.out.println("==== Student Information ====");
        System.out.println("ID: " + ID);
        System.out.println("Name: " + name);
        System.out.println("Marks: " + marks);
    }

    public boolean isPassed() {
        if(marks >= 40){
            return true;
        }
        else{
            return false;
        }
    }
}

class College {
    private String collegeName;
    private String city;
    private Student[] students; //Student class array object
    private int studentCount;

    //Constructor 
    public College(String collegeName, String city, Student[] students) {
        this.collegeName = collegeName;
        this.city = city;
        this.students = students;
        this.studentCount = students.length;
    }

    //Method
    public void displayCollegeDetails() {
        System.out.println("==== College Information ====");
        System.out.println("Name: " + collegeName); 
        System.out.println("City: " + city);

        System.out.println("\n==== Student Information ====");
        
        if(students == null || studentCount == 0) {
            System.out.println("No students enrolled!");
            return;
        }
        for(int i=0; i<studentCount; i++){
            students[i].displayStudentDetails();
        }

        int p=0, f=0;
        double sum = 0;
        for(int i=0; i<studentCount; i++){
           sum += students[i].getMarks();
           if(students[i].isPassed()){
            p++;
           }
           else{
            f++;
           }
        }
        System.out.println("\nTotal Students: " + studentCount); 
        System.out.println("Passed Students: " + p);
        System.out.println("Failed Students: " + f);
        System.out.println("Average marks (all students): " + (sum/studentCount));
    }
}

public class task5 {
    public static void main(String[] args){
        Student s1 = new Student(123, "Ali", 70.2);
        Student s2 = new Student(456, "Ahsan", 80);
        Student s3 = new Student(789, "Owais", 39.33);
        Student s4 = new Student(101, "Umer", 66);
        Student s5 = new Student(321, "Daniyal", 34.0);

        Student[] studentArray = {s1, s2, s3, s4, s5};  

        College college = new College("FAST-NUCES", "Karachi", studentArray);
        college.displayCollegeDetails();
    }
}
