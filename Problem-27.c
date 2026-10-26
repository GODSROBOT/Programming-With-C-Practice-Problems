// Electricity Bill Calculator 
// Scenario: An electricity board charges based on units consumed: 
// Up to 100 units: ₹5/unit 
// 101–200 units: ₹7/unit
// 201–300 units: ₹10/unit 
// Above 300 units: ₹12/unit 
// Write a program that takes units consumed and prints the total bill. 
// formula: bill = (units * rate per unit)
#include <stdio.h>
int main() {
    int units;
    printf("Enter the number of units consumed:\n");
    scanf("%d", &units);
    int bill = 0;

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    printf("Total electricity bill: ₹%d\n", bill);
    return 0;
}