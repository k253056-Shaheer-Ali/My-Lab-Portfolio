class Device {
    private int deviceID;
    private double powerRating; //in watts
    private double hoursUsedPerDay; //per day

    //Constructor
    public Device(int deviceID, double powerRating, double hoursUsedPerDay){
        this.deviceID = deviceID;
        this.powerRating = powerRating;
        this.hoursUsedPerDay = hoursUsedPerDay;
    }   

    //Method
    public double calculateDailyEnergyUsage(){
        return (powerRating * hoursUsedPerDay);
    }
}

class Room {
    private Device device; //device object

    //Constructor
    public Room(int deviceID, double powerRating, double hoursUsedPerDay){
       this.device = new Device(deviceID, powerRating, hoursUsedPerDay);
    }

    public double energyUsage(){
        return device.calculateDailyEnergyUsage();
    }
}

class House {
    private int ID;
    private String ownerName;
    private Room room; //room object

    //Constructor
    public House(int ID, String ownerName, int deviceID, double powerRating, double hoursUsedPerDay){
        this.ID = ID;
        this.ownerName = ownerName; 
        this.room = new Room(deviceID, powerRating, hoursUsedPerDay);
    }

    //Method
    public double totalDailyElectricityConsumption(){
        return room.energyUsage();
    }
}


public class task4 {
    public static void main(String[] args) {
        House house = new House(123, "Noman", 321, 756.54, 3);

        System.out.println("Total daily electricity consumption: " + house.totalDailyElectricityConsumption());
    }
}
