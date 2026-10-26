//Simple interest 
//Input principal, rate, and time. Calculate simple interest and total amount.
// Formula: SI = (P × R × T) / 100 

#include <stdio.h>

int main() {
    int principal, rate, time;
    printf("Enter the principal amount:\n");
    scanf("%d", &principal);
    printf("Enter the rate of interest:\n");
    scanf("%d", &rate);
    printf("Enter the time in years:\n");
    scanf("%d", &time);
    // Calculate simple interest
    int SI = (principal * rate * time) / 100;
    printf("Simple Interest: %d\n", SI);
    return 0;
}