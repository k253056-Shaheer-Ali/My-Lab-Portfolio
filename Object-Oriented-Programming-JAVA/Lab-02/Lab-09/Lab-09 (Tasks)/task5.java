class BankAccount {
    public double calculateInterest(double balance) {
        //assuming general interest: 2.5 %
        return balance * (0.025);
    }
}

class SavingsAccount extends BankAccount {
    public double calculateInterest(double balance) {
        // 5% interest
        return balance * 0.05;
    }
}

class CurrentAccount extends BankAccount {
    public double calculateInterest(double balance) {
        if(balance > 50000) {
            return balance * 0.02;
        }
        else {
            return 0.0;
        }
    }
}

class FixedDepositAccount extends BankAccount {
    public double calculateInterest(double balance) {
        if(balance > 200000) {
            // + 2% bonus interest
            return balance * (0.08 + 0.02);
        }
        else {
            return balance * 0.08;
        }
    }
}

public class task5 {
    public static void main(String[] args) {
        BankAccount bankAccount = new BankAccount();
        BankAccount savingsAccount = new SavingsAccount();
        BankAccount currentAccount = new CurrentAccount();
        BankAccount fixedDepositAccount = new FixedDepositAccount();

        System.out.println(bankAccount.calculateInterest(1500));
        System.out.println(savingsAccount.calculateInterest(1500));
        System.out.println(currentAccount.calculateInterest(1500));
        System.out.println(fixedDepositAccount.calculateInterest(1500));
    }
} 
