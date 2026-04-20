//If they order 3 pizzas with stuffed crust, print "You get free garlic bread"

#include <stdio.h>

int main() {
    int quantity;
	int crust;

    printf("Enter number of pizzas: ");
    scanf("%d", &quantity);

    printf("Choose crust type (1-Regular, 2-Thin, 3-Stuffed): ");
    scanf("%d", &crust);

    if (quantity == 3 && crust == 3) {
        printf("You get free garlic bread!\n");
    } else {
        printf("No free garlic bread.\n");
    }

    return 0;
}

