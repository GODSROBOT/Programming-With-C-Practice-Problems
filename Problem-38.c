// Write a C program to search for a given element in a one-dimensional array and display  its position. If the element is not found, display an appropriate message.
#include <stdio.h>

int main() {
    int a[5];
    int searchElement, found = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    for(int i = 0; i < 5; i++) {
        if(a[i] == searchElement) {
            printf("Element found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}