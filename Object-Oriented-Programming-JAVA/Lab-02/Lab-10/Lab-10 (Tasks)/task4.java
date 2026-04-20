class Vehicle {
    private String vehicleName;
    private int engineCC;
    private String model;

    public Vehicle(String vehicleName, int engineCC, String model) {
        this.vehicleName = vehicleName;
        this.engineCC = engineCC;
        this.model = model;
    }

    public void setVehicleName(String x) {
        this.vehicleName = x;
    }

    public void setEngineCC(int cc) {
        this.engineCC = cc;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public String getVehicleName() {
        return vehicleName;
    }

    public int getEngineCC() {
        return engineCC;
    }

    public String getModel() {
        return model;
    }

    public void display() {
        System.out.println("==== Vehicle Attributes ====");
        System.out.println("Vehicle name: " + vehicleName);
        System.out.println("Engine CC: " + engineCC);
        System.out.println("Model: " + model);

        // Local inner class — defined AND used inside display()
        class Owner {
            private String ownerName;
            private String CNIC;
            private int phoneNumber;

            public Owner(String ownerName, String CNIC, int phoneNumber) {  //Owner only takes its own fields, not Vehicle's
                this.ownerName = ownerName;
                this.CNIC = CNIC;
                this.phoneNumber = phoneNumber;
            }

            public void setOwnerName(String x) {
                this.ownerName = x;
            }

            public void setCNIC(String cnic) {
                this.CNIC = cnic;
            }

            public void setPhoneNumber(int phone) {
                this.phoneNumber = phone;
            }

            public String getOwnerName() {
                return ownerName;
            }

            public String getCNIC() {
                return CNIC;
            }

            public int getPhoneNumber() {
                return phoneNumber;
            }

            public void displayOwner() {
                System.out.println("==== Owner Details ====");
                System.out.println("Owner name: " + ownerName);
                System.out.println("CNIC: " + CNIC);
                System.out.println("Phone number: " + phoneNumber);
            }
        }

        // Must instantiate Owner inside display() — local class only lives here
        Owner owner = new Owner("Ali Khan", "42101-1234567-1", 30012345A);
        owner.displayOwner();
    }
}

class task4 {
    public static void main(String[] args) {
        Vehicle vehicle = new Vehicle("Mehran", 700, "2008") {
            @Override
            public void display() {
                System.out.println("==== Vehicle Attributes ====");
                System.out.println("Vehicle name: " + getVehicleName());
                System.out.println("Engine CC:    " + getEngineCC());
                System.out.println("Model:        " + getModel());
                System.out.println("Owner name:   " + "Ali Khan");
                System.out.println("CNIC:         " + "42101-1234567-1");
            }
        };

        vehicle.display();
    }
}