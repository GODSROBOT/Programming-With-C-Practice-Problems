// Personal details 
// Input a student’s name, age, and percentage, then display them neatly. 

#include <stdio.h>
void main() {
    char name[50];
    int age, percentage;
    printf("Enter your details:\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("Percentage: ");
    scanf("%d", &percentage);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Percentage: %d%%\n", percentage);
}