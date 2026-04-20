#include <stdio.h>

void displayMenu(char *app[], float ap[], char *mainC[], float mp[], char *des[], float dp[]);             
void showBudgetItems(char *app[], float ap[], char *mainC[], float mp[], char *des[], float dp[]);

int main() {

    char *appetizers[] = {"Samosa", "Kabab", "Fish"};
    float appetizer_prices[] = {5.99, 8.50, 12.99};

    char *main_course[] = {"Biryani", "Karahi", "Nihari"};
    float main_prices[] = {15.99, 18.50, 16.75};

    char *desserts[] = {"Falooda", "Halwa", "Kheer"};
    float dessert_prices[] = {6.99, 4.50, 5.25};

    int choice;

    do {
        printf("\n========== RESTAURANT MENU ==========\n");
        printf("1. Show Complete Menu\n");
        printf("2. Show Budget Friendly Items (< $10)\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayMenu(appetizers, appetizer_prices,
                            main_course, main_prices,
                            desserts, dessert_prices);
                break;

            case 2:
                showBudgetItems(appetizers, appetizer_prices,
                                main_course, main_prices,
                                desserts, dessert_prices);
                break;

            case 3:
                printf("\nExiting... Have a good day!\n");
                break;

            default:
                printf("\nInvalid choice, try again.\n");
        }
    } while(choice != 3);

    return 0;
}

void displayMenu(char *app[], float ap[], char *mainC[], float mp[], char *des[], float dp[]){
	
    printf("\n----- Appetizers -----\n");
    for(int i=0; i<3; i++){
    	printf("%-10s  $%.2f\n", app[i], ap[i]);

	}
        
    printf("\n----- Main Course -----\n");
    for(int i=0; i<3; i++){
    	 printf("%-10s  $%.2f\n", mainC[i], mp[i]);
	}

    printf("\n----- Desserts -----\n");
    for(int i=0; i<3; i++){
    	printf("%-10s  $%.2f\n", des[i], dp[i]);
	}
}

void showBudgetItems(char *app[], float ap[], char *mainC[], float mp[], char *des[], float dp[]){

    printf("\n===== Budget Friendly Items (< $10) =====\n");
    for(int i=0; i<3; i++){
    	if(ap[i] < 10)
            printf("Appetizer: %-10s $%.2f\n", app[i], ap[i]);
	}
    
    for(int i=0; i<3; i++){
    	if(mp[i] < 10)
            printf("Main Course: %-10s $%.2f\n", mainC[i], mp[i]);
	}
    
    for(int i=0; i<3; i++){
    	if(dp[i] < 10){
        	printf("Dessert: %-10s $%.2f\n", des[i], dp[i]);
		}
	}
    printf("------------------------------------------\n");
}

