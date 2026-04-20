class Course {
    protected String courseCode;
    protected String courseName;
    protected int courseCredits;

    //public Course(){}
    //I will use default constructor approach in main

    public void setCourseCode(String x){
        this.courseCode = x;
    }

    public void setCourseName(String y){
        this.courseName = y;
    }

    public void setCourseCredits(int z){
        this.courseCredits = z;
    }
}

class UndergraduateCourse extends Course {
    protected String departmentName;
    protected int level;  // 1 for freshman, 2 for sophomore,

    //public UndergraduateCourse(){}

    public void setDepartmentName(String dep){
        this.departmentName = dep;
    }

    public void setLevel(int level){
        this.level = level;
    }
}

class Registration extends UndergraduateCourse {
    // 'course' field kept only to satisfy task requirements
    // but it's never really needed since Registration already IS a Course via inheritance
    private Course course; 
    private int numStudents;
    private int maxStudents;
    private boolean isClosed;

    public Registration(String courseCode, String courseName, int courseCredits, String departmentName,int level, Course course, int numStudents, int maxStudents, boolean isClosed){
        //class Course
        super.courseCode = courseCode;
        super.courseName = courseName;
        super.courseCredits = courseCredits;
        //class UndergraduateCourse
        super.departmentName = departmentName;
        super.level = level;
        //class Registration
        this.course = course;
        this.numStudents = numStudents;
        this.maxStudents  = maxStudents;
        this.isClosed = isClosed;
    }

    public void setCourse(Course course){
        this.course = course;
    }

    public void setNumStudents(int numStudents){
        this.numStudents = numStudents;
    }

    public void setMaxStudents(int maxStudents){
        this.maxStudents = maxStudents;
    }

    public void setIsClosed(boolean isClosed){
        this.isClosed = isClosed;
    }

    public void registerStudent(){
        if(isClosed){
            System.out.println("Registration is closed!");
            return; // exit early, no need for more checks
        }
        if(numStudents < maxStudents){
            numStudents++;
            System.out.println("Student registered!");
            if(numStudents == maxStudents){
                isClosed = true; 
                System.out.println("Course is now full. Registration closed.");
            }
        }
    }

    public void displayDetails(){
        System.out.println("===== Course Details =====");
        System.out.println("Code: " + courseCode);
        System.out.println("Name: " + courseName);
        System.out.println("Credits: " + courseCredits);
        System.out.println("Department: " + departmentName);
        System.out.println("No. of students: " + numStudents);
        System.out.println("Max students: " + maxStudents);
        if(isClosed){
            System.out.println("Course is closed for registration.");
        } else{
            System.out.println("Course is open for registration.");
        }
    }
}

class task2 {
    public static void main(String[] args) {
        UndergraduateCourse OOP = new UndergraduateCourse();
        Registration DLD = new Registration("EE-1005", "Digital Logic Design", 3, "SE", 1, OOP, 35, 50, false);
       
        System.out.println("--- Before registrations ---");
        DLD.displayDetails();

        DLD.registerStudent();
        DLD.registerStudent();

        System.out.println("\n--- After registrations ---");
        DLD.displayDetails();
    }
}