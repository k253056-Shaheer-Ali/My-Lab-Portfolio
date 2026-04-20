class Vehicle {     //Base Class
    protected int vehicleID;
    protected String brand;
    protected int speed;
    protected String fuelType;

    public Vehicle(int vehicleID, String brand, int speed, String fuelType) {
        this.vehicleID = vehicleID;
        this.brand = brand;
        this.speed = speed;
        this.fuelType = fuelType;
    }

    //Functions
    public void start(){
        System.out.println("Vehicle has started.");
    }

    public void stop(){
        System.out.println("Vehicle has stopped.");
    }

    public void displayInfo(){
        System.out.println("==== Vehicle Information ====");
        System.out.println("Vehicle ID : " + vehicleID);
        System.out.println("Brand: " + brand);
        System.out.println("Speed: " + speed);
        System.out.println("Fuel type: " + fuelType);
    }
}

class Car extends Vehicle {
    private boolean sunroof = false;
    private boolean cruiseControl = false;

    public Car(int vehicleID, String brand, int speed, String fuelType){
        super(vehicleID, brand, speed, fuelType);
    }

    public void openSunroof(){
        if(!sunroof){
            sunroof = true;
            System.out.println("Sunroof opened.");
        }
        else{
            System.out.println("Sunroof already opened.");
        }
    }

    public void activateCruiseControl(){
        if(!cruiseControl){
            cruiseControl = true;
            System.out.println("Cruise control activated.");
        }
        else{
            System.out.println("Cruise control is already activated.");
        }
    }
}

class Truck extends Vehicle {
    private int weight = 0;  //assume initial weight is zero

    public Truck(int vehicleID, String brand, int speed, String fuelType) {
        super(vehicleID, brand, speed, fuelType);
    }

    public void loadCargo(int weight){
        this.weight = weight;
        System.out.println("Weight loaded.");
    }

    public void unloadCargo(){
        weight = 0;
        System.out.println("Weight unloaded.");
    }
}

class Motorbike extends Vehicle {
    private boolean wheelie = false;
    private boolean ABS = false;

    public Motorbike(int vehicleID, String brand, int speed, String fuelType) {
        super(vehicleID, brand, speed, fuelType);
    }

    public void popWheelie(){
        if(!wheelie){
            wheelie = true;
            System.out.println("Popping a wheelie.");
        }
        else{
            System.out.println("Already on one wheel.");
        }
    }

    public void enableABS(){
        if(!ABS){
            ABS = true;
            System.out.println("ABS enabled.");
        }
        else{
            System.out.println("ABS already enabled.");
        }
    }
}

class Bus extends Vehicle {
    private int passengers = 0;

    public Bus(int vehicleID, String brand, int speed, String fuelType) {
        super(vehicleID, brand, speed, fuelType);
    }

    public void pickPassengers(int count){
        passengers += count;
        System.out.println("No. of passengers picked: " + passengers);
    }

    public void dropPassengers(){
        passengers = 0;
        System.out.println("Passengers dropped.");
    }
}

public class task1 {
    public static void main(String[] args) {
        //Child class objects
        Car car = new Car(123, "Toyota", 180, "Petrol");
        Truck truck = new Truck(456, "Volvo", 150, "Diesel");
        Motorbike motorbike = new Motorbike(107, "Yamaha", 180, "Petrol");
        Bus bus = new Bus(204, "Hino", 220, "Electric");

        car.start();
        car.displayInfo();
        car.openSunroof();
        car.activateCruiseControl();
        System.out.println("");

        truck.start();
        truck.displayInfo();
        truck.loadCargo(200);
        truck.unloadCargo();
        System.out.println("");

        motorbike.start();
        motorbike.displayInfo();
        motorbike.popWheelie();
        motorbike.enableABS();
        System.out.println("");

        bus.start();
        bus.displayInfo();
        bus.pickPassengers(5);
        bus.dropPassengers();
    }
}