// Write a C program to declare and initialize a one-dimensional array and display its  elements.
#include <stdio.h>

int main() {
    int a[4] = {3, 5, 3, 8};
    for(int i = 0; i<4; i++) {
        printf("These are the elements %d: %d\n", i, a[i]);
    }
    return 0;
}