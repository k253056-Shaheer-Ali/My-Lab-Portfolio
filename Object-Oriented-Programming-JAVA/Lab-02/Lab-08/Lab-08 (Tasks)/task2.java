interface Communication {
    void connect(String network); //Wifi or LAN
}

interface PowerManagement {
    //boolean powerStatus = false;
    //int batteryStatus = 54;
    void powerOn();
    void powerOff();
    int checkBattery();
}

class Printer implements Communication, PowerManagement {
    boolean powerStatus = false;
    int batteryStatus = 54;

    public void connect(String network){
        System.out.println("Printer connected to network: " + network);
    }

    public void powerOn(){
        if(!powerStatus){
            powerStatus = true;
            System.out.println("Printer powered on.");
        }
        else{
            System.out.println("Printer already powered on.");
        }
    }

    public void powerOff(){
        if(powerStatus){
            powerStatus = false;
            System.out.println("Printer powered off.");
        }
        else{
            System.out.println("Printer already powered off.");
        }
    }

    public int checkBattery(){
        return batteryStatus;
    }
}

class Scanner implements Communication, PowerManagement {
    boolean powerStatus = false;
    int batteryStatus = 70;

    public void connect(String network){
        System.out.println("Scanner connected to network: " + network);
    }

    public void powerOn(){
        if(!powerStatus){
            powerStatus = true;
            System.out.println("Scanner powered on.");
        }
        else{
            System.out.println("Scanner already powered on.");
        }
    }

    public void powerOff(){
        if(powerStatus){
            powerStatus = false;
            System.out.println("Scanner powered off.");
        }
        else{
            System.out.println("Scanner already powered off.");
        }
    }

    public int checkBattery(){
        return batteryStatus;
    }
}
public class task2 {
   public static void main(String[] args) {
        Printer printer = new Printer();
        Scanner scanner = new Scanner();

        printer.connect("Wi-fi");
        printer.powerOn();
        System.out.println("Battery level: " + printer.checkBattery());
        printer.powerOff();

        System.out.println("");

        scanner.connect("Wi-fi");
        scanner.powerOn();
        System.out.println("Battery level: " + scanner.checkBattery());
        scanner.powerOff();
   } 
}
