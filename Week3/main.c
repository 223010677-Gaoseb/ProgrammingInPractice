#include <stdio.h>

int main () {

    float basic_salary;
    float housing;
    float transport;
    float tax;
    float gross_salary;
    float net_salary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    printf("Enter Housing Allowance: ");
    scanf("%f", &housing);
    
    printf("Enter Transport Allowance: ");
    scanf("%f", &transport);

    if (basic_salary*12<100000){
        tax=0;
    }
    else if (basic_salary*12 <= 150000){
        tax = (((basic_salary*12)-100000)*0.18)/12;
    }
    else if (basic_salary*12 <= 350000){
        tax = (9000 + ((basic_salary*12)-150001)*0.25)/12;
    }
    else if (basic_salary*12 <= 550000){
        tax = (59000 + ((basic_salary*12)-350001)*0.28)/12;
    }
    else if (basic_salary*12 <= 850000){
        tax = (115000 + ((basic_salary*12)-550001)*0.30)/12;
    }
    else if (basic_salary*12 <= 1550000){
        tax = (205000 + ((basic_salary*12)-850001)*0.32)/12;
    }
    else {
        tax = (429000 + ((basic_salary*12)-1550000)*0.37)/12;
    }

    gross_salary = basic_salary + housing + transport;
    net_salary = gross_salary - tax;

    printf("\nGross Salary: %.2f\n", gross_salary);
    printf("\nTax: %.2f\n", tax);
    printf("\nNet Salary: %.2f\n", net_salary);

    return 0;

}