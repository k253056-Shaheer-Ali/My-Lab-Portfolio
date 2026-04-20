class DiscountCalculator {
    
    public double calculatePrice(double price) {
        return price;
    }

    public double calculatePrice(double price, double discountPercent) {
        return price - (price * (discountPercent/100));
    }

    public double calculatePrice(double price, double discountPercent, double couponAmount) {
        return (price - (price * (discountPercent/100))) - couponAmount;
    }
}

class task1 {
        public static void main(String[] args) {
        DiscountCalculator obj = new DiscountCalculator();

        System.out.println(obj.calculatePrice(1000));
        System.out.println(obj.calculatePrice(1000, 20));
        System.out.println(obj.calculatePrice(1000, 20, 200));
    }
}