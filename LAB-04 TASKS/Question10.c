/* Combine all into one program: */

#include <stdio.h>

int main(void) {
    int size;
    int quantity;
    int total = 0;     
    int crust_type, crust;
    int option;
    float discount_total = 0.0f;
    int time;
    char cheese;
    char ID;

    // Task 1: Select Pizza Size
    printf("Select a Pizza size:\n");
    printf("1. Small\n2. Medium\n3. Large\n");
    printf("Enter your choice(1, 2, or 3): ");
    scanf("%d", &size);

    switch (size) {
        case 1: 
            printf("Small Pizza\n");
            total = 8;   // base price
            break;
        case 2: 
            printf("Medium Pizza\n");
            total = 12;  // you can assign medium price
            break;
        case 3: 
            printf("Large Pizza\n");
            total = 15;  // large price
            break;
        default: 
            printf("Invalid Size\n");
            return 0;
    }

    // Task 2: Quantity
    printf("\nHow many Pizza(s) you want?: ");
    scanf("%d", &quantity);

    if (quantity > 1) {
        printf("Check our multi-pizza deals!\n");
    } else {
        printf("Your total is: $8\n");
    }

    // Task 3: Multi-Pizza Deals (for Small)
    printf("\nHow many Pizza(s) you want? (1,2 or 3): ");
    scanf("%d", &quantity);

    if (quantity == 1) {
        total = 8;
    } else if (quantity == 2) {
        total = 15;
    } else if (quantity == 3) {
        total = 21;
    } else {
        printf("Invalid quantity.\n");
        return 1;
    }

    printf("\nThe total cost for %d pizza(s) is: $%d\n", quantity, total);

    // Task 4: Crust
    printf("\nSelect the crust type:\n");
    printf("1. Regular crust (0$))\n");
    printf("2. Thin crust (1$)\n");
    printf("3. Stuffed crust (2$)\n");
    printf("Enter your choice (1,2 or 3): ");
    scanf("%d", &crust_type);

    if (crust_type == 1) {
        total += 0;
    } else if (crust_type == 2) {
        total += 1;
    } else if (crust_type == 3) {
        total += 2;
    } else {
        printf("\nInvalid Crust. Regular selected by default\n");
    }

    printf("\nThe new total cost is: $%d\n", total);

    // Task 5: Extra Cheese
    printf("\nDo you want extra cheese? (Y/N) : ");
    scanf(" %c", &cheese);

    if (cheese == 'y' || cheese == 'Y') {
        total += 1.5;
        printf("Extra cheese added.\n");
    } else {
        printf("No extra cheese added.\n");
    }

    printf("\nYour new total cost is: $%d\n", total);

    // Task 6: Time Discount
    printf("\nEnter the current time (0-23): ");
    scanf("%d", &time);

    if (time >= 11 && time < 14) {
        printf("You got a 10%% discount!\n");
        discount_total = total - (total * 0.10);
    } else {
        discount_total = total;
    }

    printf("The discounted total is: $%.2f\n", discount_total);

    // Task 7: Student Discount
    printf("\nDo you have a student ID? (Y/N): ");
    scanf(" %c", &ID);

    if (ID == 'Y' || ID == 'y') {
        printf("students get $2 off!\n");
        discount_total = discount_total - 2;
    }

    printf("Final cost after student discount: $%.2f\n", discount_total);

    // Task 8: Free Garlic Bread
    printf("\nChoose crust type again for garlic bread check (1-Regular, 2-Thin, 3-Stuffed): ");
    scanf("%d", &crust);

    if (quantity == 3 && crust == 3) {
        printf("You get free garlic bread!\n");
    } else {
        printf("No free garlic bread.\n");
    }

    // Task 9: Delivery Option
    printf("\nChoose option:\n1. Pickup\n2. Delivery (+$3)\n");
    scanf("%d", &option);

    if (option == 2) {
        discount_total += 3;
    }

    printf("\nFinal cost including delivery if selected: $%.2f\n", discount_total);

    return 0;
}

