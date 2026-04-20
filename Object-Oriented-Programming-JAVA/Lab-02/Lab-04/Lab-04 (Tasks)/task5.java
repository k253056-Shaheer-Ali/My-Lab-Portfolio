class Laptop {
    private String brand;
    private String model;
    private double price;
    private int stock;

    //Default constructor:
    public Laptop(){
        brand = "";
        model = "";
        price = 0.0;
        stock = 0;
    }

    //Parameterized constructor:
    public Laptop(String brand, String model, double price, int stock){
        this.brand = brand;
        this.model = model;
        this.price = price;
        this.stock = stock;
    }

    //Copy constructor:
    public Laptop(Laptop obj){
        this.brand = obj.brand;
        this.model = obj.model;
        this.price = obj.price;
        this.stock = obj.stock;
    }

    //Setter and getter methods:
    public void setBrand(String brand){
        this.brand = brand;
    }
    public String getBrand(){
        return brand;
    }
    public void setModel(String model){
        this.model = model;
    }
    public String getModel(){
        return model;
    }
    public void setPrice(double price){
        this.price = price;
    }
    public double getPrice(){
        return price;
    }
    public void setStock(int stock){
        this.stock = stock;
    }
    public int getStock(){
        return stock;
    }

    //Destructor simulation:
    public void finalize(){
        System.out.println("Laptop object is being removed: " + brand + " " + model);
    }

    //Helper method to display laptop details
    public void displayInfo(){
        System.out.println("Brand: " + brand);
        System.out.println("Model: " + model);
        System.out.println("Price: PKR" + price);
        System.out.println("Stock: " + stock);
        System.out.println("------------------------");
    }
}

class task5 {
    public static void main(String[] args){
        // Create laptop using default constructor
        Laptop l1 = new Laptop();
        System.out.println("Laptop 1 (Default Constructor - before setting values):");
        l1.displayInfo();

        // Set values using setters
        l1.setBrand("Dell");
        l1.setModel("Latitude");
        l1.setPrice(26000);
        l1.setStock(2);

        System.out.println("Laptop 1 (After setting values):");
        l1.displayInfo();

        // Create laptop using parameterized constructor
        Laptop l2 = new Laptop("HP", "Pavilion", 35000, 5);
        System.out.println("Laptop 2 (Parameterized Constructor):");
        l2.displayInfo();

        // Create laptop using copy constructor (copy of l1)
        Laptop l3 = new Laptop(l1);
        System.out.println("Laptop 3 (Copy Constructor - copy of Laptop 1):");
        l3.displayInfo();

        // Demonstrate that copy is independent
        l3.setPrice(28000);
        l3.setStock(3);
        System.out.println("Laptop 3 (After modifying copy):");
        l3.displayInfo();
        System.out.println("Laptop 1 (Original unchanged):");
        l1.displayInfo();

        // Demonstrate destructor simulation
        System.out.println("Calling finalize manually (simulating destructor):");
        l2.finalize();
        System.out.println("Setting object to null and calling gc():");
        l2 = null;
        System.gc();
    }
}