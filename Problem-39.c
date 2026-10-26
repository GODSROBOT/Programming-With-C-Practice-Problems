// Write a C program to search for a given element in a one-dimensional array and display  all the positions where the element occurs 

#include <stdio.h>
int main() {
    int a[5];
    int searchElement, found = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    printf("Element found at positions: ");
    for(int i = 0; i < 5; i++) {
        if(a[i] == searchElement) {
            printf("%d ", i);
            found = 1;
        }
    }

    if(!found) {
        printf("Element not found in the array.\n");
    } else {
        printf("\n");
    }

    return 0;
}