// Write a C program to declare a one-dimensional array and read 5 elements from the user,  then display the elements
#include <stdio.h>

int main() {
    int a[5];
    printf("Enter the 5 digits for the array : \n");
    for(int i = 0; i<5; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<5; i++) {
        printf("These are the elements of the array %d: %d\n", i ,a[i]);
    }

    return 0;
}