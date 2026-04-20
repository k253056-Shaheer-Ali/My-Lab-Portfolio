class BankAccount {
    String accountNumber;
    String accountHolderName;
    private double balance;

    //Constructor
    public BankAccount(String accountNumber, String accountHolderName, double balance){
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;
        this.balance = balance;
    }

    //Setter and Getter for balance (as private scope is limited to its own class)
    //Can either use protected or public

    protected void setBalance(double balance){
        this.balance = balance;
    }
    protected double getBalance(){
        return balance;
    }

    //Functions
    public void deposit(double amount){
        balance += amount;
    }

    public void withdraw(double amount){
        if(amount > balance){
            return;
        }
        balance -= amount;
    }

    public void displayAccount(){
        System.out.println("====== Account Details ======");
        System.out.println("Account no: " + accountNumber);
        System.out.println("Holder name: " + accountHolderName);
        System.out.println("Balance: " + balance);
        System.out.println("=============================");
    }
}

class SavingsAccount extends BankAccount {
    private double interestRate;  //annual interest

    //Constructor
    public SavingsAccount(String accountNumber, String accountHolderName, double balance, double interestRate) {
        super(accountNumber, accountHolderName, balance);
        this.interestRate = interestRate;
    }

    //Function
    public void calculateInterest(){
        double interestEarned = (getBalance() * interestRate) / 100; 
        setBalance(getBalance() + interestEarned);
    }

    public void displayAccount() {
        super.displayAccount(); 
        System.out.println("Interest Rate: " + interestRate);
    }
}
public class task1 {
    public static void main(String[] args) {
        SavingsAccount sa = new SavingsAccount("123", "Sherry", 5000.12, 0.05);

        sa.deposit(1000);
        sa.withdraw(3400.50);
        sa.calculateInterest();
        sa.displayAccount();
    }
}
