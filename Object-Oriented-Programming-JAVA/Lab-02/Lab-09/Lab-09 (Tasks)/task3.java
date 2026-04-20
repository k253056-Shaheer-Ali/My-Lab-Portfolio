class ElectricityBill {

    public double calculatePrice(int unitsConsumed) {
        return unitsConsumed * 10;
    }

    public double calculatePrice(int unitsConsumed, String customerType) {
        if(customerType.equalsIgnoreCase("domestic")) {
            return unitsConsumed * 10;
        }
        else if(customerType.equalsIgnoreCase("commercial")) {
            return unitsConsumed * 15;
        }
        return 0;
    }

    public double calculatePrice(int unitsConsumed, String customerType, boolean loyaltyStatus) {
        double total = 0;

        if(customerType.equalsIgnoreCase("domestic")) {
            total = unitsConsumed * 10;
        }
        else if(customerType.equalsIgnoreCase("commercial")) {
            total = unitsConsumed * 15;
        }

        if(loyaltyStatus){
            return total - (total * 0.05);
        }
        else {
            return total;
        }
    }
}

public class task3 {
    public static void main(String[] args) {
        ElectricityBill obj = new ElectricityBill();

        System.out.println(obj.calculatePrice(10));
        System.out.println(obj.calculatePrice(10, "domestic"));
        System.out.println(obj.calculatePrice(10, "commercial", true));   
    }
}
