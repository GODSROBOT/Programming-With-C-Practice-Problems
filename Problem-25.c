// Flight Boarding Check 
// Scenario: An airline allows boarding only if the passenger has a valid ticket. Among those  with valid tickets, they must also arrive before the gate closes to be allowed to board. Write a  program that takes ticket validity (1/0) and arrival status (1 = on time, 0 = late), and prints the  boarding result. 

#include <stdio.h>
int main() {
    int validTicket;
    int arrivalStatus;
    printf("Enter ticket validity (1 for valid, 0 for invalid):\n");
    scanf("%d", &validTicket);
    printf("Enter arrival status (1 for on time, 0 for late):\n");
    scanf("%d", &arrivalStatus);

    if (validTicket) {
        if (arrivalStatus) {
            printf("Boarding allowed.\n");
        } else {
            printf("Boarding denied: Arrived late.\n");
        }
    } else {
        printf("Boarding denied: Invalid ticket.\n");
    }

    return 0;
}