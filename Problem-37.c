// Write a C program to find the largest and smallest elements in a one-dimensional array. 

#include <stdio.h>
int main() {
    int a[5];
    int largest, smallest;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    smallest = a[0];

    for(int i = 1; i < 5; i++) {
        if(a[i] > largest) {
            largest = a[i];
        }
        if(a[i] < smallest) {
            smallest = a[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}