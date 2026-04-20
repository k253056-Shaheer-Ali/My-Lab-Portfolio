import java.util.Scanner;

class Item {
    public String itemName;
    public int itemID;
    private float price;
    private int stock;
    public String search;

    //setter
    public void update(float price, int stock){
        this.price = price;
        this.stock = stock;
    }

    //getter
    public float getPrice(){ return price; }
    public int getStock(){ return stock; }

    //methods
    public void purchase(int qty){
        if(qty > this.stock){
            System.out.println("Insufficient Stock!");
        }
        else{
            float total = qty * price;
            stock -= qty; // Update stock
            System.out.println("--- Bill ---");
            System.out.println("Item: " + itemName);
            System.out.println("Total Price: " + total);
            System.out.println("Remaining Stock: " + stock);
        }
    }

    public void bill(){

    }
}

public class task2 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Item i1 = new Item();
        Item i2 = new Item();

        i1.itemName = "Whey rotein";
        i1.itemID = 123;
        i1.update(1000, 5);
        i2.itemName = "Creatine";
        i2.itemID = 321;
        i2.update(2000, 10);

        System.out.println("Search for an item to purchase: ");
        String search = sc.nextLine();

        if(search.equalsIgnoreCase(i1.itemName)){
            System.out.println(i1.itemName + " : PKR " + i1.getPrice());
            System.out.println("Enter quantity to buy: ");
            int qty = sc.nextInt();
            i1.purchase(qty);
        }
        else if(search.equalsIgnoreCase(i2.itemName)){
            System.out.println(i2.itemName + " : PKR " + i2.getPrice());
            System.out.println("Enter quantity to buy: ");
            int qty = sc.nextInt();
            i2.purchase(qty);
        }
        else{
            System.out.println("Item not found!");
        }

         sc.close();
    }
}
