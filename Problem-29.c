// Weather-Based Clothing Suggestion 
// Scenario: A weather app suggests clothing based on temperature: 
// Below 10°C: "Wear heavy jacket" 
// 10°C to 20°C: "Wear a sweater" 
// 20°C to 30°C: "Wear light clothing" 
// Above 30°C: "Wear cotton clothes and stay hydrated" 
// Write a program that takes the temperature and prints the suggestion. 

#include <stdio.h>
int main() {
    float temperature;
    printf("Enter the current temperature (in °C):\n");
    scanf("%f", &temperature);

    if (temperature < 10) {
        printf("Suggestion: Wear heavy jacket\n");
    } else if (temperature <= 20) {
        printf("Suggestion: Wear a sweater\n");
    } else if (temperature <= 30) {
        printf("Suggestion: Wear light clothing\n");
    } else {
        printf("Suggestion: Wear cotton clothes and stay hydrated\n");
    }

    return 0;
}