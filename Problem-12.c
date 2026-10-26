// Shopping bill 
// Read Input an item’s price and quantity. Calculate subtotal, 5% tax, and final bill.

#include <stdio.h>

int main() { 
    int price, quantity, subtotal, tax, total;
    printf("Enter the price of the item:\n");
    scanf("%d", &price);
    printf("Enter the quantity of the item:\n");
    scanf("%d", &quantity);
    subtotal = price * quantity;
    tax = (subtotal * 5) / 100; // tax rate of 5%
    total = subtotal + tax;
    printf("\nSubtotal: %d\n", subtotal);
    printf("Tax: %d\n", tax);
    printf("\nTotal: %d\n", total);
    return 0;
}