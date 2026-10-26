// Loan Approval 
// Scenario: A bank approves a loan only if the applicant's monthly income is above ₹30,000.  Among those, the loan is approved instantly only if their credit score is above 750; otherwise,  it goes for manual review. Write a program that takes income and credit score, and prints the  result. 

#include <stdio.h>
int main() {
    int income;
    int creditScore;
    printf("Enter the applicant's monthly income (₹):\n");
    scanf("%d", &income);
    printf("Enter the applicant's credit score:\n");
    scanf("%d", &creditScore);

    if (income > 30000) {
        if (creditScore > 750) {
            printf("Loan approved instantly.\n");
        } else {
            printf("Loan goes for manual review.\n");
        }
    } else {
        printf("Loan denied: Income below threshold.\n");
    }

    return 0;
}