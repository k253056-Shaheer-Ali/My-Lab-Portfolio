class Student {
    private int rollNo;
    private String name;
    private double marks;
    private int attendance;

    //setter
    public void setStudent(int rollNo, String name, double marks, int attendance){
        this.rollNo = rollNo;
        this.name = name;
        this.marks = marks;
        this.attendance = attendance;
    }

    //getter
    public int getRollNo(){ return rollNo; }
    public String getName(){ return name; }
    public double getMarks(){ return marks; }
    public int getAttendance(){ return attendance; }

    public void calculateResult(){
        if(marks >= 40 && attendance >= 75){
            System.out.println("Pass");
        }
        else{
            System.out.println("Fail");
        }
    }

    public void displayDetails(){
        System.out.println("Roll no : " +  rollNo);
        System.out.println("Name : " + name);
        System.out.println("Marks : " + marks);
        System.out.println("Attendance : " + attendance);
    }
}

public class task3 {
    public static void main(String[] args){
        Student s1 = new Student();
        Student s2 = new Student();
        Student s3 = new Student();

        s1.setStudent(123, "Ali", 75, 80);
        s2.setStudent(321, "Sherry", 78, 74);
        s3.setStudent(542, "Owais", 90, 45);

        s1.calculateResult();
        s1.displayDetails();
        s2.calculateResult();
        s2.displayDetails();
        s3.calculateResult();
        s3.displayDetails();
    }
}