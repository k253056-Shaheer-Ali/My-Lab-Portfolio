class Delivery {
    
    public double calculateCost(double orderAmount) {
        return orderAmount;
    }
}

class StandardDelivery extends Delivery {
    
    public double calculateCost(double orderAmount) {
        if(orderAmount > 2000) {
            return orderAmount;
        }
        else {
            return orderAmount + 100;
        }
    }
}

class ExpressDelivery extends Delivery {

    public double calculateCost(double orderAmount) {
        return orderAmount + 200;
    }
}

class ScheduledDelivery extends Delivery {
    private int daysAhead;

    public ScheduledDelivery(int daysAhead) {
        this.daysAhead = daysAhead;
    }

    public double calculateCost(double orderAmount) {
        if(daysAhead > 1) {
            return orderAmount + 100;  // early booking discount
        }
        else {
            return orderAmount + 150;
        }
    }
}

public class task4 {
    public static void main(String[] args) {
        //Delivery obj = new Delivery();
        //StandardDelivery obj1 = new StandardDelivery();
        //ExpressDelivery obj2 = new ExpressDelivery();
        //ScheduledDelivery obj3 = new ScheduledDelivery(2);

        Delivery obj1 = new StandardDelivery();
        Delivery obj2 = new ExpressDelivery();
        Delivery obj3 = new ScheduledDelivery(2);

        System.out.println(obj1.calculateCost(1000));
        System.out.println(obj2.calculateCost(1000));
        System.out.println(obj3.calculateCost(1000));
    }
}
