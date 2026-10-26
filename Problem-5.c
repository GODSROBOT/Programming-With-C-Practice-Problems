// Temperature conversion 
// Input temperature in Celsius and convert it to Fahrenheit. 
// Formula: F = (C × 9 / 5) + 32 

#include <stdio.h>

int main() {
    int temp;
    printf("Enter temperature in Celsius:\n");
    scanf("%d", &temp);
    // Convert Celsius to Fahrenheit
    int fahrenheit = (temp * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %d\n", fahrenheit);
    return 0;
}