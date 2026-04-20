class Laptop {
    private String brandName;
    private int ram;  //in GB
    private int batteryCapacity; //in mAh

    //Setters and Getters
    public void setBrandName(String brandName) {
        this.brandName = brandName;
    }
    public String getBrandName() {
        return brandName;
    }
    public void setRam(int ram) {
        this.ram = ram;
    }
    public int getRam() {
        return ram;
    }
    public void setBatteryCapacity(int batteryCapacity) {
        this.batteryCapacity = batteryCapacity;
    }
    public int getBatteryCapacity() {
        return batteryCapacity;
    }

    //Constructor
    public Laptop(String brandName, int ram, int batteryCapacity) {
        this.brandName = brandName;
        this.ram = ram;
        this.batteryCapacity = batteryCapacity;
    }

    //Methods
    public double calculateBatteryBackup() {
        return batteryCapacity / (ram * 500.0);
    }
}

class Student {
    private int ID;
    private String name;
    private Laptop laptop;

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
    public Student(int ID, String name, Laptop laptop) {
        this.ID = ID;
        this.name = name;
        this.laptop = laptop;
    }

    //Method
    public void displayInfo() {
        System.out.println("==== Student Information ====");
        System.out.println("ID : " + ID);
        System.out.println("Name : " + name);
        System.out.println("----Laptop Info----");
        System.out.println("Brand name : " + laptop.getBrandName());
        System.out.println("Ram : " + laptop.getRam());
        System.out.println("Battery Capacity : " + laptop.getBatteryCapacity());
        System.out.println("Battery Backup : " + laptop.calculateBatteryBackup() + " hours");
    }
}

public class task2 {
   public static void main(String[] args) {
       Laptop l1 = new Laptop("Dell", 8, 4500);
       Laptop l2 = new Laptop("Lenovo", 16, 5000);
        //Laptop objects created in main and passed as parameters (aggregation)
        //So their lifecycle is independent of Student class
       Student s1 = new Student(456, "Sherry", l1);
       Student s2 = new Student(123, "Ali", l2);

       s1.displayInfo();
       s2.displayInfo();
   } 
}
    