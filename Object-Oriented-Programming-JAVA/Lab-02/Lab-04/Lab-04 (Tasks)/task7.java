class Employee {
    private int empID;
    private String name;
    private double basicSalary;
    private int daysWorked;

    //Default Constructor:
    public Employee(){
        empID = 0;
        name = "";
        basicSalary = 0.0;
        daysWorked = 0;
    }

    //Parameterized Constructor:
    public Employee(int empID, String name, double basicSalary, int daysWorked){
        this.empID = empID;
        this.name = name;
        this.basicSalary = basicSalary;
        this.daysWorked = daysWorked;
    }

    //Copy Constructor:
    public Employee(Employee obj){
        empID = obj.empID;
        name = obj.name;
        basicSalary = obj.basicSalary;
        daysWorked = obj.daysWorked;
    }

    //Setter and Getters:
    public void setEmpID(int empID){
        this.empID = empID;
    }
    public int getEmpID(){
        return empID;
    }
    public void setName(String name){
        this.name = name;
    }
    public String getName(){
        return name;
    }
    public void setBasicSalary(double basicSalary){
        this.basicSalary = basicSalary;
    }
    public double getBasicSalary(){
        return basicSalary;
    }
    public void setDaysWorked(int daysWorked){
        this.daysWorked = daysWorked;
    }
    public int getDaysWorked(){
        return daysWorked;
    }

    //Method:
    public double calculateSalary(){
        return (basicSalary / 30) * daysWorked;
    }

    public void displayInfo(){
        System.out.println("Employee details: ");
        System.out.println("ID: " + empID);
        System.out.println("Name: " + name);
        System.out.println("Basic salary: " + basicSalary);
        System.out.println("Days worked: " + daysWorked);
    }

    //Destructor/Finalizer:
    protected void finalize(){
        System.out.println("Employee is being removed: " + empID + " " + name);
    }
}

class task7 {
    public static void main(String[] args){
        Employee e1 = new Employee();
        Employee e2 = new Employee(123, "Ali", 80000, 20);
        Employee e3 = new Employee(e2);

        //using some setter
        e2.setName("John");  // This would "update details"
        e2.setDaysWorked(25);

        // Display all employee details with calculated salaries
        System.out.println("\n=== Employee Details ===");
        e1.displayInfo();
        System.out.println("Calculated Salary: " + e1.calculateSalary() + "\n");

        e2.displayInfo();
        System.out.println("Calculated Salary: " + e2.calculateSalary() + "\n");

        e3.displayInfo();
        System.out.println("Calculated Salary: " + e3.calculateSalary());

        //destructor/finalizer
        e3.finalize();
        e3 = null;
        System.gc();
    }
}