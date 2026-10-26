// Sum of digits of a two-digit number 
// Example: Input 47, output 4 + 7 = 11.
// formula: sum = (number / 10) + (number % 10)

#include <stdio.h>

int main() {
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    a = (a / 10) + (a % 10);
    printf("Sum of digits of the number: %d\n", a);
    return 0;
}