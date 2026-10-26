// Last digit 
// Input an integer and display its last digit using the remainder
// formula: last_digit = number % 10
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    a = a % 10;
    printf("Last digit of the number: %d\n", a);
    return 0;
}