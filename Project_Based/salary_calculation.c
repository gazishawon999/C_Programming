#include <stdio.h>

#define TAXABLE_INCOME 250000  // Assuming taxable income threshold is 250000

int main() {
    float basicSalary, hra, da, grossSalary;
    
    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);
    
    // Calculate HRA and DA based on conditions
    if (basicSalary <= 10000) {
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    } else {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }
    
    // Calculate gross salary
    grossSalary = basicSalary + hra + da;
    
    // Print the results
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", grossSalary);
    
    // Determine if it's taxable income
    if (grossSalary > TAXABLE_INCOME) {
        printf("This is taxable income.\n");
    } else {
        printf("This is not taxable income.\n");
    }
    
    return 0;
}
