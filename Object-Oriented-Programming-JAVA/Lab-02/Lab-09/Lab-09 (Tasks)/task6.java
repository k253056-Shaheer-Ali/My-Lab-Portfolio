class Device {
    public void performAction(String action) {
        // what should i do here?
        System.out.println("Action not supported by base device.");
    }
}

class Light extends Device {
    private boolean state = true;
    private int brightness = 100;

    public void performAction(String action) {

        if(action.equalsIgnoreCase("ON")) {
            if(!state) {
                this.state = true;
                System.out.println("Light turned ON.");
            }
        }
        else if(action.equalsIgnoreCase("OFF")) {
            if(state) {
                this.state = false;
                System.out.println("Light turned OFF.");
            }
        }
        else if(action.equalsIgnoreCase("DIM")) {
            this.brightness -= 50;
            System.out.println("Brightness reduced to 50%");
        }
        else {
            System.out.println("Action not valid.");
        }
    }
}

class Thermostat extends Device {
    int temperature = 20;
    boolean state = true; //off or on

    public void setTemperature(int temp) { 
        this.temperature = temp; 
    }
 
    public void performAction(String action, int temp) {

        if(action.equalsIgnoreCase("SET_TEMPERATURE")) {
                //this.temperature = temp;
                System.out.println("Temperature set to: " + temp);
        }
        else if(action.equalsIgnoreCase("OFF")) {
            if(state) {
                this.state = false;
                System.out.println("Thermostat turned OFF.");
            }
        }
        else if(action.equalsIgnoreCase("BOOST")) {
            this.temperature += 5;
            System.out.println("Temperature boosted (+5 degrees)");
        }
        else {
            System.out.println("Action not valid.");
        }
    }
}

class SecurityCamera extends Device {
    boolean recording =  false;
    boolean alarm = false;

    public void performAction(String action) {

        if(action.equalsIgnoreCase("RECORD")) {
            if(!recording) {
                this.recording = true;
                System.out.println("Recording started.");
            }
        }
        else if(action.equalsIgnoreCase("STOP")) {
            if(recording) {
                this.recording = false;
                System.out.println("Recording stopped.");
            }
        }
        else if(action.equalsIgnoreCase("ALERT")) {
            if(!alarm) {
                this.alarm = true;
                System.out.println("Alarm triggered!");
            }
        }
        else {
            System.out.println("Action not valid.");
        }
    }
}

class SmartSpeaker extends Device {
    boolean state = false;
    int volume = 0;

    public void performAction(String action) {

        if(action.equalsIgnoreCase("PLAY")) {
            if(!state) {
                this.state = true;
                System.out.println("Music playing.");
            }
        }
        else if(action.equalsIgnoreCase("STOP")) {
            if(state) {
                this.state = false;
                System.out.println("Music stopped.");
            }
        }
        else if(action.equalsIgnoreCase("VOLUME_UP")) {
            if(volume < 100) {
                this.volume += 10;
                System.out.println("Volume increased.");
            }
            System.out.println("Volume: " + volume);
        }
        else if(action.equalsIgnoreCase("VOLUME_DOWN")) {
            if(volume > 0) {
                this.volume -= 10;
                System.out.println("Volune decreased.");
            }
            System.out.println("Volume: " + volume);
        }
        else {
            System.out.println("Action not valid.");
        }
    }
}

public class task6 {
    public static void main(String[] args) {
        //Device light = new Light();
        //Device thermostat = new Thermostat();
        //Device securityCamera = new SecurityCamera();
        //Device smartSpeaker = new SmartSpeaker();

        
        //upcasting
        Device[] devices = new Device[4];
        devices[0] = new Light();
        devices[1] = new Thermostat();
        devices[2] = new SecurityCamera();
        devices[3] = new SmartSpeaker();

        // Set thermostat temp before actions
        ((Thermostat) devices[1]).setTemperature(22); // downcast to access specific method

        // Each device performs its action — runtime polymorphism
        devices[0].performAction("OFF");           // Light off
        devices[1].performAction("SET_TEMPERATURE"); // Thermostat 22°C
        devices[2].performAction("RECORD");        // Camera record
        devices[3].performAction("PLAY");          // Speaker play
    }
}
