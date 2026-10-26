// Swap without a third variable 
// Use arithmetic operators to exchange two integer values.

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter any number:\n");
    scanf("%d", &a);
    printf("Enter any number:\n");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    // Swapping without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}