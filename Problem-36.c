// Write a C program to count the number of even and odd elements in a one-dimensional  array.

#include <stdio.h>

int main() {
    int a[5];
    int even = 0, odd = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 5; i++) {
        if(a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);

    return 0;
}