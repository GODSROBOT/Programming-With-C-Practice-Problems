// Print 1 to 5 using recursion 
#include <stdio.h>
void printNumbers(int n) {
    if (n > 5) {
        return;
    }
    printf("%d\n", n);
    printNumbers(n + 1);
}
int main() {
    printf("Printing numbers from 1 to 5:\n");
    printNumbers(1);
    return 0;
}