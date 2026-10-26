// A librarian wants to arrange n books in a stack. The number of arrangements follows  the factorial pattern. Write a recursive function factorial(n) to calculate the number of  arrangements. 

#include <stdio.h>
// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive case
}
int main() {
    int n;
    printf("Enter the number of books to arrange:\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int arrangements = factorial(n);
        printf("Number of arrangements for %d books: %d\n", n, arrangements);
    }

    return 0;
}