// Swap two numbers using a third variable 
// Display the values before and after swapping. 

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter any number:\n");
    scanf("%d", &a);
    printf("Enter any number:\n");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    // Swapping using a temporary variable
    c = a;
    a = b;
    b = c;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}