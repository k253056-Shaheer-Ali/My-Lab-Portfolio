#include<stdio.h>

void calculate_tax();

int main(){
    calculate_tax();
    return 0;
}

void calculate_tax(){
    float gross, tax = 0, net;
    
    printf("Enter gross income: $");
    scanf("%f", &gross);
    
    if(gross > 50000){
        tax = (gross - 50000) * 0.20 + 30000 * 0.10;
    }
    else if(gross > 20000){
        tax = (gross - 20000) * 0.10;
    }
    
    net = gross - tax;
    		
    printf("Tax Amount: $%.2f\n", tax);
    printf("Net Income: $%.2f\n", net);
}
