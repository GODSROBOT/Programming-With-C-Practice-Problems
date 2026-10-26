// write a program to subtract two matrices.
#include <stdio.h>
int main() {
    int a[2][2], b[2][2], diff[2][2];

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtracting the two matrices
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of the two matrices:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}