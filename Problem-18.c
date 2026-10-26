// ATM Withdrawal Alert 
// Scenario: A bank wants to alert customers if they withdraw more than ₹50,000 in a single  transaction. Write a program that takes the withdrawal amount and prints "Alert: Large  withdrawal!" if applicable.

#include <stdio.h>

int main() {
    int amount;
    printf("Enter the withdrawal amount:\n");
    scanf("%d", &amount);
    if (amount > 50000) {
        printf("Alert: Large withdrawal!\n");
    } else {
        printf("Withdrawal amount is within the limit.\n");
    }
    return 0;
}