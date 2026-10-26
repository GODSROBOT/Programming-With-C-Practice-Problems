// Rectangle measurements 
// Input length and breadth. Calculate area and perimeter. 
#include <stdio.h>

int main() {
    int l, b;
    printf("Enter the length of the rectangle:\n");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%d", &b);
    int area = l * b;
    printf("Area of the rectangle: %d\n", area);
    return 0;
}