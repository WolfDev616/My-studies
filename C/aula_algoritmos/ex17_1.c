#include <stdio.h>
#include <stdlib.h>

int main() {
    float wageHour = 28.5;
    float hoursWorked;
    int dependents;

    printf("Insert hours worked and number of dependents: \n");
    scanf("%f %i", &hoursWorked, &dependents);

    float finalSalary;
    finalSalary = (wageHour * hoursWorked) + (dependents * (0.05 * (wageHour * hoursWorked)));

    printf("This employee's salary is %.2f. \n", finalSalary);

    return 0;
}
