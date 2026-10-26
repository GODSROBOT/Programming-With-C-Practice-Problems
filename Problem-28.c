// Cab Fare Estimator 
// Scenario: A cab company categorizes trip fares based on distance: 
// 0–5 km: ₹100 
// 5–10 km: ₹200 
// 10–20 km: ₹350 
// Above 20 km: ₹500 
// Write a program that takes the distance and prints the fare category.
#include <stdio.h>
int main() {
    float distance;
    printf("Enter the distance of the trip (in km):\n");
    scanf("%f", &distance);

    if (distance <= 5) {
        printf("Fare: ₹100\n");
    } else if (distance <= 10) {
        printf("Fare: ₹200\n");
    } else if (distance <= 20) {
        printf("Fare: ₹350\n");
    } else {
        printf("Fare: ₹500\n");
    }

    return 0;
}
