import java.util.Scanner;

public class task7 {
    public static void main(String[] args){
        System.out.println("==== Invoice application ====");
        Scanner input = new Scanner(System.in);

        String[] name = new String[100];
        double[] price = new double[100];
        System.out.println("Enter items (first item’s name and then price):");

        char choice = 'n';
        int i = 0;
        while(choice != 'y' && choice != 'Y'){
            System.out.print("Item name: ");
            name[i] = input.nextLine();

            if(name[i].isEmpty()) {
                System.out.print("Exit(y/n): ");
                choice = input.nextLine().charAt(0);
                if(choice == 'y' || choice == 'Y') break;
            }

            System.out.print("Price: $");
            price[i] = input.nextDouble();
            input.nextLine();  // FIX 3: Clear newline

            i++;
        }

        //subtotal
        double subtotal = 0;
        for(int j=0; j<i; j++){
            subtotal += price[j];
        }
        //discount
        double d_percent = 0.10;  //10%
        double d_amount = subtotal * d_percent;
        //tax
        double total_before_tax = (subtotal - d_amount);
        double tax = 0.05;  //5%
        //final amount
        double invoice_total = (subtotal - d_amount) + (total_before_tax * tax);

        //Output
        System.out.println("\nPurchased items:");
        for(int j=0; j<i; j++){
            System.out.println(name[j] + " : $" + price[j]);
        }
        System.out.println("\nSubtotal: $" + subtotal);
        System.out.println("Discount percent: " + d_percent + "%");
        System.out.println("Discount amount: $" + d_amount);
        System.out.println("Total before tax: $" + total_before_tax);
        System.out.println("Sales tax: " + tax + "%");
        System.out.println("Invoice total: $" + invoice_total);
        input.close();
    }
}
