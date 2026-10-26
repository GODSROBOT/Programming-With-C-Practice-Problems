// Salary calculator 
// Input basic salary. Calculate: 
// • HRA = 20% of basic salary 
// • DA = 40% of basic salary 
// • Gross salary = basic salary + HRA + DA
// formula hra = (basic salary * 20) / 100
// da = (basic salary * 40) / 100

#include <stdio.h>

int main() {
    int basicSalary, hra, da, grossSalary;
    printf("Enter the basic salary:\n");
    scanf("%d", &basicSalary);
    hra = (basicSalary * 20) / 100;
    da = (basicSalary * 40) / 100;
    grossSalary = basicSalary + hra + da;
    printf("HRA: %d\n", hra);
    printf("DA: %d\n", da);
    printf("Gross Salary: %d\n", grossSalary);
    return 0;
}