// Reverse a number
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    int reverse = 0;
        reverse = reverse * 10 + a % 10;
        a = a / 10;
    printf("Reversed number: %d\n", reverse);
    return 0;
}