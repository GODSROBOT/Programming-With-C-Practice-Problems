// Online Order Delivery Charge 
// Scenario: An online store offers free delivery for orders above ₹500; otherwise, a ₹50  delivery charge applies. Write a program that takes the order amount and prints the applicable  delivery charge. 
#include <stdio.h>

int main() {
    int orderAmount;
    printf("Enter the order amount (₹):\n");
    scanf("%d", &orderAmount);
    if (orderAmount > 500) {
        printf("Free delivery!\n");
    } else {
        printf("Delivery charge: ₹50\n");
    }
    return 0;
}