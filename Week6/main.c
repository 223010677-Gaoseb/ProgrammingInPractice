

#include <stdio.h>
#include <string.h>

int main() {

    float salaries[50];
    float totalSalary = 0, averageSalary, highestSalary, lowestSalary;
    float searchSalary;
    int found = 0;

    printf("=== EMPLOYEE SALARIES ===\n\n");

    for (int i = 0; i < 50; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    printf("\n--- All Employee Salaries ---\n");
    for (int i = 0; i < 50; i++) {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    highestSalary = salaries[0];
    lowestSalary = salaries[0];

    for (int i = 0; i < 50; i++) {
        totalSalary += salaries[i];

        if (salaries[i] > highestSalary) {
            highestSalary = salaries[i];
        }
        if (salaries[i] < lowestSalary) {
            lowestSalary = salaries[i];
        }
    }

    averageSalary = totalSalary / 50;

    printf("\n--- Salary Report ---\n");
    printf("Total salary expenditure: %.2f\n", totalSalary);
    printf("Average salary: %.2f\n", averageSalary);
    printf("Highest salary: %.2f\n", highestSalary);
    printf("Lowest salary: %.2f\n", lowestSalary);

    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchSalary);

    found = 0;
    for (int i = 0; i < 50; i++) {
        if (salaries[i] == searchSalary) {
            printf("Salary %.2f found at employee position %d\n", searchSalary, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Salary %.2f not found.\n", searchSalary);
    }

    
    float budgets[10];
    float totalBudget = 0, averageBudget;
    float temp;

    printf("\n=== DEPARTMENT BUDGETS ===\n\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }

    printf("\n--- Department Budgets ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
    }

    for (int i = 0; i < 10; i++) {
        totalBudget += budgets[i];
    }
    averageBudget = totalBudget / 10;

    printf("\nTotal municipal budget: %.2f\n", totalBudget);
    printf("Average department budget: %.2f\n", averageBudget);

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    printf("\n--- Sorted Budgets (Ascending) ---\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", budgets[i]);
    }


    char registrations[20][20];
    char searchReg[20];

    printf("\n=== VEHICLE REGISTRATIONS ===\n\n");

    for (int i = 0; i < 20; i++) {
        printf("Enter vehicle registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\n--- Vehicle Registrations ---\n");
    for (int i = 0; i < 20; i++) {
        printf("%s\n", registrations[i]);
    }

    printf("\nEnter a registration number to search for: ");
    scanf("%19s", searchReg);

    found = 0;
    for (int i = 0; i < 20; i++) {
        if (strcmp(registrations[i], searchReg) == 0) {
            printf("Registration %s found at position %d\n", searchReg, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Registration %s not found.\n", searchReg);
    }

    return 0;
}
