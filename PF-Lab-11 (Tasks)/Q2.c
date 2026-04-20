#include <stdio.h>
#include <string.h>

struct Transaction {
    char date[20];
    char type[20]; // "Deposit" or "Withdrawal"
    float amount;
};

struct BankAccount {
    int accountNo;
    char name[50];
    char type[20]; // "Savings", "Current", "Fixed Deposit"
    float balance;
    float minBalance;
    float interestRate;
    char creationDate[20];
    char lastTransactionDate[20];
    struct Transaction transactions[100];
    int transactionCount;
};

int main() {
    int n;
    printf("Number of accounts to create: ");
    scanf("%d", &n);
    
    struct BankAccount accounts[n];
    
    // Create accounts
    for(int i=0; i<n; i++) {
        printf("\n=== Account %d ===\n", i+1);
        printf("Account No: "); scanf("%d", &accounts[i].accountNo);
        printf("Name: "); scanf(" %[^\n]", accounts[i].name);
        printf("Type (Savings/Current/Fixed Deposit): "); scanf("%s", accounts[i].type);
        printf("Initial Balance: "); scanf("%f", &accounts[i].balance);
        printf("Creation Date (DD-MM-YYYY): "); scanf("%s", accounts[i].creationDate);
        
        // Set min balance and interest based on account type
        if(strcmp(accounts[i].type, "Savings") == 0) {
            accounts[i].minBalance = 1000;
            accounts[i].interestRate = 4.0;
        } else if(strcmp(accounts[i].type, "Current") == 0) {
            accounts[i].minBalance = 5000;
            accounts[i].interestRate = 0.0;
        } else if(strcmp(accounts[i].type, "Fixed Deposit") == 0) {
            accounts[i].minBalance = 10000;
            accounts[i].interestRate = 7.0;
        }
        
        accounts[i].transactionCount = 0;
        strcpy(accounts[i].lastTransactionDate, accounts[i].creationDate);
        
        // Add initial deposit transaction
        strcpy(accounts[i].transactions[0].date, accounts[i].creationDate);
        strcpy(accounts[i].transactions[0].type, "Deposit");
        accounts[i].transactions[0].amount = accounts[i].balance;
        accounts[i].transactionCount++;
    }
    
    // Perform transactions
    int choice;
    do {
        printf("\n=== BANK MENU ===\n");
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Transaction History\n5. Exit\n");
        printf("Choice: "); scanf("%d", &choice);
        
        if(choice >= 1 && choice <= 4) {
            int accNo, found = 0;
            printf("Enter Account No: "); scanf("%d", &accNo);
            
            for(int i=0; i<n; i++) {
                if(accounts[i].accountNo == accNo) {
                    found = 1;
                    
                    if(choice == 1) { // Deposit
                        float amount;
                        char date[20];
                        printf("Deposit Amount: "); scanf("%f", &amount);
                        printf("Date (DD-MM-YYYY): "); scanf("%s", date);
                        
                        accounts[i].balance += amount;
                        strcpy(accounts[i].lastTransactionDate, date);
                        
                        // Add to transaction history
                        int t = accounts[i].transactionCount;
                        strcpy(accounts[i].transactions[t].date, date);
                        strcpy(accounts[i].transactions[t].type, "Deposit");
                        accounts[i].transactions[t].amount = amount;
                        accounts[i].transactionCount++;
                        
                        printf("Deposit successful! New balance: $%.2f\n", accounts[i].balance);
                    }
                    else if(choice == 2) { // Withdraw
                        float amount;
                        char date[20];
                        printf("Withdrawal Amount: "); scanf("%f", &amount);
                        printf("Date (DD-MM-YYYY): "); scanf("%s", date);
                        
                        if(accounts[i].balance - amount >= accounts[i].minBalance) {
                            accounts[i].balance -= amount;
                            strcpy(accounts[i].lastTransactionDate, date);
                            
                            // Add to transaction history
                            int t = accounts[i].transactionCount;
                            strcpy(accounts[i].transactions[t].date, date);
                            strcpy(accounts[i].transactions[t].type, "Withdrawal");
                            accounts[i].transactions[t].amount = amount;
                            accounts[i].transactionCount++;
                            
                            printf("Withdrawal successful! New balance: $%.2f\n", accounts[i].balance);
                        } else {
                            printf("Error: Cannot withdraw! Minimum balance requirement not met.\n");
                        }
                    }
                    else if(choice == 3) { // Check Balance
                        printf("\nAccount Holder: %s\n", accounts[i].name);
                        printf("Account Type: %s\n", accounts[i].type);
                        printf("Current Balance: $%.2f\n", accounts[i].balance);
                        printf("Minimum Balance: $%.2f\n", accounts[i].minBalance);
                        printf("Interest Rate: %.1f%%\n", accounts[i].interestRate);
                    }
                    else if(choice == 4) { // Transaction History
                        printf("\n=== Transaction History ===\n");
                        printf("Account: %s (%d)\n", accounts[i].name, accounts[i].accountNo);
                        for(int j=0; j<accounts[i].transactionCount; j++) {
                            printf("%s: %s $%.2f\n", 
                                   accounts[i].transactions[j].date,
                                   accounts[i].transactions[j].type,
                                   accounts[i].transactions[j].amount);
                        }
                    }
                }
            }
            if(!found) printf("Account not found!\n");
        }
    } while(choice != 5);
    
    return 0;
}
