class Vehicle {
    private int speed;
    private String colour;
    private int numWheels;

    public Vehicle() {
        this.speed = 0;
        this.colour = "None";
        this.numWheels = 0;
    }

    public Vehicle(int speed, String colour, int numWheels) {
        this.speed = speed;
        this.colour = colour;
        this.numWheels = numWheels;
    }

    public void setSpeed(int speed){
        this.speed = speed;
    }

    public void setColour(String colour){
        this.colour = colour;
    }

    public void setNumWheels(int numWheels){
        this.numWheels = numWheels;
    }

    public int getSpeed(){
        return speed;
    }

    public String getColour(){
        return colour;
    }

    public int getNumWheels(){
        return numWheels;
    }
}

class MotorVehicle extends Vehicle {
    private String licensePlate;

    public MotorVehicle(){
        super();
        this.licensePlate = "";
    }

    public void setLicensePlate(String licensePlate){
        this.licensePlate = licensePlate;
    }

    public String getLicensePlate(){
        return licensePlate;
    }
}

class Car extends MotorVehicle {
    private int numDoors;

    public Car(){
        super();  // calls MotorVehicle() → which calls Vehicle()
        this.numDoors = 0;
    }

    public void setNumDoors(int numDoors){
        this.numDoors = numDoors;
    }

    public int getNumDoors(){
        return numDoors;
    }

    public void display(){
        System.out.println("===== Vehicle Details =====");
        System.out.println("Speed: " + getSpeed());
        System.out.println("Colour: " + getColour());
        System.out.println("No. of wheels: " + getNumWheels());
        System.out.println("License plate: " + getLicensePlate());
        System.out.println("No. of doors: " + numDoors);
    }
}

class task5 {
    public static void main(String[] args) {
        Car car = new Car();
        car.setSpeed(120);
        car.setColour("Red");
        car.setNumWheels(4);
        car.setLicensePlate("ABC-1234");
        car.setNumDoors(4);

        car.display();
    }
}