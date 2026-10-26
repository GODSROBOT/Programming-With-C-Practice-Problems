// Write a C program to find the sum of all elements in a one-dimensional array. 
#include <stdio.h>
int main() {
    int a[5];
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("The sum of the numbers is: %d", sum);
    return 0;
}