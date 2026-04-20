import java.util.Scanner;

public class task10 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        //assuming initial correct info:
        String username = "shx7ry";
        int password = 12345678;
        float balance = 2000;

        System.out.print("Enter username: ");
        String x = input.nextLine();
        System.out.print("Enter password: ");
        int y = input.nextInt();

        int choice = 0;
        float d_amount = 0, w_amount = 0;
        if (username.equals(x) && password == y) {
            char cont = 'y';

            while (cont == 'y' || cont == 'Y') {
                System.out.println("** Welcome to Bank of Pakistan **");
                System.out.println("Main Menu ");
                System.out.println("1. Deposit Money");
                System.out.println("2. Withdraw Amount");
                System.out.println("3. Account status");
                System.out.print("Select your choice: ");
                choice = input.nextInt();

                switch (choice) {
                    case 1: {
                        System.out.println("Enter deposit amount: ");
                        d_amount = input.nextFloat();
                        balance += d_amount;
                        System.out.println("Amount deposited!");
                        System.out.println("Current balance: " + balance);
                        break;
                    }
                    case 2: {
                        System.out.print("Enter withdraw amount: ");
                        w_amount = input.nextFloat();
                        if (w_amount <= balance) {
                            balance -= w_amount;
                            System.out.println("Amount Withdrawn!");
                        } else {
                            System.out.println("Insufficient balance!");
                        }
                        System.out.println("Current balance: " + balance);
                        break;
                    }
                    case 3: {
                        System.out.println("Account status: ");
                        System.out.println("---------------");
                        System.out.println("Account Holder: " + username);
                        System.out.println("Account Number: " + "32****");
                        System.out.println("Current Balance: " + balance);
                        break;
                    }
                    default:
                        System.out.println("Invalid choice!");
                }
                System.out.println("\nDo you want to continue? [y/Y]: ");
                cont = input.next().charAt(0);
                input.nextLine();
            }
        } else {
            System.out.println("Invalid username or password!");
        }

        System.out.println("Thank you for using Bank of Pakistan!");
        input.close();
    }
}
