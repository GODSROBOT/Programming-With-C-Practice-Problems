// Arithmetic calculator 
// Input two integers and print their sum, difference, product, quotient, and remainder.


#include <stdio.h>

int main() {
    int a, b, sum, diff, product, quotient, remainder;
    printf("Enter Any Numbers:\n");
    scanf("%d", &a);
    printf("Enter Any Numbers:\n");
    scanf("%d", &b);
    // Perform arithmetic operations
    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;
    // Display the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    return 0;
}