class Employee {
    private int ID;
    private String name;
    private double basicSalary;
    //Static fields shared by all object:
    private static double bonusPool = 0; //global/total bonus pool
    private static double bonusPercentage = 10; //assumed fixed
    private static int totalEmployees = 0;


    //Constructor
    public Employee(int ID, String name, double basicSalary) {
        this.ID = ID;
        this.name = name;
        this.basicSalary = basicSalary;
        bonusPool = bonusPool + (basicSalary * bonusPercentage / 100);
        totalEmployees++;
    }

    //Getters
    public int getId() {
        return ID;
    }
    public String getName() {
        return name;
    }
    public double getBasicSalary() {
        return basicSalary;
    }

    //Methods
    public double calculateTotalCompensation() {
        return (basicSalary + (bonusPool / totalEmployees));
    }

    public static void displayBonusPool() {
        System.out.println("Total Bonus Pool: " + Employee.bonusPool);
    }

    public void displayInfo() {
        System.out.println("==== Employee Details ====");
        System.out.println("ID: " + ID);
        System.out.println("Name: " + name);
        System.out.println("Basic salary: " + basicSalary);
        System.out.println("Total Compensation: " + calculateTotalCompensation() + "\n");
    }
}

public class task3 {
    public static void main(String[] args) {
        Employee e1 = new Employee(123,"Sherry", 20000);
        Employee e2 = new Employee(456, "Ali", 30000);
        Employee e3 = new Employee(789, "Owais", 35000);
        Employee e4 = new Employee(101, "Shayan", 45000);

        e1.displayInfo();
        e2.displayInfo();
        e3.displayInfo();
        e4.displayInfo();

        Employee.displayBonusPool();
    }
}
