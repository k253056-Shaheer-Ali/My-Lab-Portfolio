/* If they want delivery, add $3. Ask if it's delivery or pickup (1. Pickup, 2. Delivery). Calculate the
final cost. */

#include <stdio.h>

int main() {
    float total = 8.5;  // Assume order cost
    int option;

    printf("Choose option:\n1. Pickup\n2. Delivery (+$3)\n");
    scanf("%d", &option);

    if (option == 2) {
        total += 3;
    }

    printf("Final cost: $%.2f\n", total);
    
    return 0;
}

