abstract class Vehicle {
    protected String brand;
    protected String model;
    protected int year;

    public Vehicle(String brand, String model, int year) {
        this.brand = brand;
        this.model = model;
        this.year = year;
    }

    abstract public double getSalePrice();
}

class Car extends Vehicle {
    protected double basePrice;

    public Car(String brand, String model, int year, double basePrice) {
        super(brand, model, year);
        this.basePrice = basePrice;
    }

    public double getSalePrice() {
        int age = 2026 - year;

        if(age < 3)  {
            return basePrice * 1.2;
        }
        else if(age <= 10 && age >= 3) {
            return basePrice * 0.9;
        }
        else if(age > 10) {
            return basePrice * 0.5;
        }
        return 0;
    }
}

class Truck extends Vehicle {
    protected double basePrice;
    protected double weightCapacity;
    
    public Truck(String brand, String model, int year, double basePrice, double weightCapacity) {
        super(brand, model, year);
        this.basePrice = basePrice;
        this.weightCapacity = weightCapacity;
    }

    public double getSalePrice() {
        if(weightCapacity < 2) {
            return basePrice + 5000; 
        }
        else if(weightCapacity <= 5 && weightCapacity >= 2) {
            return basePrice + 10000;
        }
        else if(weightCapacity > 5) {
            return basePrice + 20000;
        }
        return 0;
    }
}

class task1 {
    public static void main(String[] args) {
        Vehicle car = new Car("Toyota" , "Altis", 2017, 2000000);
        Vehicle truck = new Truck("Volvo", "idk", 2020, 5000000, 6);

        System.out.println("Car sale price: " + car.getSalePrice());
        System.out.println("\nTruck sale price: " + truck.getSalePrice());
    }
}


//return 0; // after the last else if
//Or just use if / else if / else instead of three if chains — then compiler is satisfied.