//  Low Stock Alert 
// Scenario: A shop's inventory system should alert the manager if the stock of an item falls  below 10 units. Write a program that takes the current stock and prints "Reorder stock now!"  if needed. 
#include <stdio.h>

int main() {
    int stock;
    printf("Enter the current stock:\n");
    scanf("%d", &stock);
    if (stock < 10) {
        printf("Reorder stock now!\n");
    } else {
        printf("Stock is sufficient.\n");
    }
    return 0;
}