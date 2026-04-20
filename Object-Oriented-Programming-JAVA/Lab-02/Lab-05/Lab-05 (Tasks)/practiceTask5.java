class Student {
    private int id;
    private String name;
    private double marks;

    public static int totalStudents = 0;

    public Student(int id, String name, double marks) {
        this.id = id;
        this.name = name;
        this.marks = marks;
        totalStudents++;
    }

    public double getMarks() {
        return marks;
    }

    public void displayStudentDetails() {
        System.out.println("==== Student Information ====");
        System.out.println("Id: " + id);
        System.out.println("Name: " + name);
        System.out.println("Marks: " + marks);
    }

    public boolean isPassed() {
        if(marks >= 40) {
            return true;
        }
        else {
            return false;
        }
    }
}

class College {
    private String name;
    private String city;
    private Student[] students;

    public College(String name, String city, Student[] students) {
        this.name = name;
        this.city = city;
        this.students = students;
    }

    public void displayCollegeDetails() {
        System.out.println("==== College Information ====");
        System.out.println("College name: " + name);
        System.out.println("City: " + city);

        for(int i=0; i<students.length; i++) {
            students[i].displayStudentDetails();
        }

        int passed = 0, failed = 0;
        double sum = 0;
        for(int i=0; i<students.length; i++) {
            sum = sum + students[i].getMarks();

            if(students[i].isPassed()) {
                passed++;
            }
            if(!students[i].isPassed()) {
                failed++;
            }
        }
        double avgMarks = sum / students.length;

        System.out.println("Total students: " + Student.totalStudents);
        System.out.println("Passed Students: " + passed);
        System.out.println("Failed Students: " + failed);
        System.out.println("Average Marks: " + avgMarks);
    }
}

class practiceTask5 {
    public static void main(String[] args) {
        Student s1 = new Student(123, "Ali" , 80);
        Student s2 = new Student(345, "Bilal" , 40);
        Student s3 = new Student(643, "Kamran" , 30);

        Student[] students = {s1, s2, s3};
        
        College college = new College("Gilbert burns" , "Totenham City", students);
        college.displayCollegeDetails();

        /*alternate ways:
        Student[] students;
        students = new Student[] {s1, s2, s3};

        Student[] students = new Student[3];
        */
    }
}