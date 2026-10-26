// Exam Pass/Fail 
// Scenario: A student needs at least 35 marks out of 100 to pass an exam. Write a program that  takes the marks and prints whether the student passed or failed.
#include <stdio.h>

int main() {
    int marks;
    printf("Enter the student's marks:\n");
    scanf("%d", &marks);
    if (marks >= 35) {
        printf("Student has passed.\n");
    } else {
        printf("Student has failed.\n");
    }
    return 0;
}