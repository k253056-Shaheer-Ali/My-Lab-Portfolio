class Student {
    private int rollNo;
    private String name;
    private double marks;
    
    //setter
    public void update(int rollNo, String name, double marks){
        this.rollNo = rollNo;
        this.name = name;
        this.marks = marks;
    }
    //getter
    public int getRollNo(){ return rollNo; }
    public String getName(){ return name; }
    public double getMarks(){ return marks; }

    //method
    public String calculateGrade() {
        if (marks >= 80) return "A";
        else if (marks >= 70) return "B";
        else if (marks >= 60) return "C";
        else if (marks >= 50) return "D";
        else return "F";
    }

    public void displayDetails(){
        System.out.println("Roll No: " + rollNo + " | Name: " + name + " | Marks: " + marks + " | Grade: " + calculateGrade());
    }

}

public class task1{
    public static void main(String[] args){
        Student s1 = new Student();
        Student s2 = new Student();
        Student s3 = new Student();

        s1.update(3012, "Owais", 90);
        s2.update(3021, "Daniyal", 76);
        s3.update(3058, "Ali", 54);

        s1.displayDetails();
        s2.displayDetails();
        s3.displayDetails();
    }
}