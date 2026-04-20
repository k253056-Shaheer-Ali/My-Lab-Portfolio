#include<stdio.h>

void transaction(int limit);

int main(){
    int limit = 5000;
    transaction(limit);
    return 0;
}

void transaction(int limit){
    int amount, remaining = limit;
    
    printf("Enter transaction amount: ");
    scanf("%d", &amount);
    
    if(amount <= remaining){
        remaining = remaining - amount;
        printf("APPROVED\n");
        printf("New remaining limit: $%d\n", remaining);
    }
    else{
        printf("DECLINED\n");
        printf("Original limit remains: $%d\n", limit);
    }
}
