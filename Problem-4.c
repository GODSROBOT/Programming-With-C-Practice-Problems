// Circle measurements 
// Input the radius. Calculate diameter, circumference, and area. Use 3.14 for π. 


#include <stdio.h>

float pi = 3.14; // Global variable for pi
int main() {
    int r;
    printf("Enter the radius of the circle:\n");
    scanf("%d", &r);
    // Calculate area, circumference, and diameter of the circle
    float area = pi * r * r;
    float circumference = 2 * pi * r;
    float diameter = 2 * r;

    printf("\nArea of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    printf("Diameter of the circle: %.2f\n", diameter);

    return 0;
}