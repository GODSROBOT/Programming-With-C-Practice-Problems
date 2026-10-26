// Speed Camera 
// Scenario: A speed camera on a highway flags any vehicle going faster than 80 km/h. Write a  program that takes a vehicle's speed and prints "Speeding ticket issued!" if it exceeds the  limit.
#include <stdio.h>

int main() {
    int speed;
    printf("Enter the vehicle's speed (km/h):\n");
    scanf("%d", &speed);
    if (speed > 80) {
        printf("Speeding ticket issued!\n");
    } else {
        printf("Vehicle is within the speed limit.\n");
    }
    return 0;
}