#include <stdio.h>
int main() {
    float price = 10.0; 
    float increase = 0.1;
    int years = 5;
    for (int i = 0; i < years; i++) {
        price *= (1 + increase); // Increase the price by 10%
    }
    printf("The price of the burger after 5 years is: %.2f\n", price);
    return 0;
}
