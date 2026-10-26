// Movie Ticket Eligibility 
// Scenario: A cinema allows entry to an "A-rated" movie only if the person is 18 or older. Write  a program that takes the age as input and prints whether entry is allowed or denied.
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Entry allowed.\n");
    } else {
        printf("Entry denied.\n");
    }
    return 0;
}