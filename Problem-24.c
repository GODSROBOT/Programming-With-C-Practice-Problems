// Job Application Screening 
// Scenario: A company shortlists candidates only if they have a minimum of 60% marks.  Among those, only candidates with at least 2 years of experience get called for an interview.  Write a program that takes marks percentage and years of experience, and prints the outcome. 

#include <stdio.h>

int main() {
    int marks;
    int experience;
    printf("Enter the candidate's marks (%%):\n");
    scanf("%d", &marks);
    printf("Enter the candidate's years of experience:\n");
    scanf("%d", &experience);

    if (marks >= 60) {
        if (experience >= 2) {
            printf("Candidate is shortlisted for an interview.\n");
        } else {
            printf("Candidate does not have enough experience.\n");
        }
    } else {
        printf("Candidate does not meet the minimum marks requirement.\n");
    }

    return 0;
}