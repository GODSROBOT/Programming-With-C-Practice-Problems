// Average marks 
// Input marks in five subjects. Calculate total and average. 

#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5, total;
    printf("Enter marks for 5 subjects:\n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    // Calculate total marks
    float average = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Total Marks: %d\n Average: %.2f\n", total, average);
    return 0;
}