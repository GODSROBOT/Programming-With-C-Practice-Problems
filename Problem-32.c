// A teacher wants to calculate the total marks obtained by a student in n subjects. Write  a recursive function calculateSum(n) to find the sum of marks/numbers entered.
#include <stdio.h>
// Recursive function to calculate the sum of marks
int calculateSum(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 subjects is 0
    }
    int mark;
    printf("Enter marks for subject %d:\n", n);
    scanf("%d", &mark);
    return mark + calculateSum(n - 1); // Recursive case
}
int main() {
    int n;
    printf("Enter the number of subjects:\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Number of subjects cannot be negative.\n");
    } else {
        int totalMarks = calculateSum(n);
        printf("Total marks obtained in %d subjects: %d\n", n, totalMarks);
    }

    return 0;
}