#include <stdio.h>
int main() 
{
    float salaries[6]; 
    int count = 0;

    printf("Reading Employee Salaraaye \n");

    for (int i = 0; i < 6; i++) {
        printf("Enter salary for employee %d: $", i + 1);
        scanf("%f", &salaries[i]);
    }

    printf("\nSalary Report\n");

    for (int i = 0; i < 6; i++) {
        printf("Employee %d salary: $%.2f\n", i + 1, salaries[i]);


        if (salaries[i] > 50000) {
            count = count + 1;
        }
    }

    printf("\nNumber of employees earning more than $50,000: %d\n", count);

    return 0;
}

