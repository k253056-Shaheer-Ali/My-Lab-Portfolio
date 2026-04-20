class OrderPrice {

    public double calculatePrice(double price) {
        return price;
    }

    public double calculatePrice(double price, int distance) {
        //lets assume distance was given in meters
        double deliveryCharges = (distance / 1000.0) * 20; // integer multiplication destroys decimal so its ok
        return price + deliveryCharges;
    }

    public double calculatePrice(double price, int distance, String couponCode) {
        double deliveryCharges = (distance / 1000.0) * 20;
        price += deliveryCharges;

        if(couponCode.equalsIgnoreCase("SAVE10")) {
            price = price - (price * 0.10);
        }
        return price;
    }
}   

public class task2 {
    public static void main(String[] args) {
        OrderPrice obj = new OrderPrice();

        System.out.println(obj.calculatePrice(1200));
        System.out.println(obj.calculatePrice(1200, 6));
        System.out.println(obj.calculatePrice(1200, 10, "SAVE10"));
    }
}
