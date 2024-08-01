#include <stdio.h>

int main() {
    int customerId;
    char customerName[50];
    float previousReading, currentReading, unitPrice, totalUnits, totalBill;

    // Reading customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Previous Meter Reading: ");
    scanf("%f", &previousReading);
    printf("Enter Current Meter Reading: ");
    scanf("%f", &currentReading);
    printf("Enter Unit Price: ");
    scanf("%f", &unitPrice);

    // Calculating total units and total bill
    totalUnits = currentReading - previousReading;
    totalBill = totalUnits * unitPrice;

    // Displaying the results
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Total Units Consumed: %.2f\n", totalUnits);
    printf("Total Bill: $%.2f\n", totalBill);

    return 0;
}