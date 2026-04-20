class Student {
    static int totalStudents = 0;
    private int ID;
    private String name;

    //Setters and Getters
    public void setID(int ID) {
        this.ID = ID;
    }
    public int getID() {
        return ID;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getName() {
        return name;
    }

    //Constructor
    public Student(int ID, String name) {
        this.ID = ID;
        this.name = name;
        Student.totalStudents++;
    }

    //Static Method
    public static void displayTotal() {
        System.out.println("\nTotal no. of students: " + totalStudents);
    }

    //Method to display details
    public void displayInfo() {
        System.out.println("==== Student Details ====");
        System.out.println("ID : " + ID);
        System.out.println("Name : " + name);
    }
}

class task1 {
    public static void main(String[] args) {
        Student s1 = new Student(123, "Ali");
        Student s2 = new Student(456, "Sherry");
        Student s3 = new Student(789, "Owais");

        
        s1.displayInfo();
        s2.displayInfo();
        s3.displayInfo();

        Student.displayTotal();
    }
}