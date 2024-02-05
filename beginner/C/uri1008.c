#include<stdio.h>

float salaryCalculator(float amount, int hours);
void showEmployeeData(int empNum, float salary);
int main(int argc, char const *argv[]) {
    int employeeNum, workedHours; // in a month
    float amountPerHour;

    scanf("%d", &employeeNum);
    scanf("%d", &workedHours);
    scanf("%f", &amountPerHour);

    showEmployeeData(employeeNum, salaryCalculator(amountPerHour, workedHours));
    
    return 0;
}

float salaryCalculator(float amount, int hours) {
    return amount * hours;
}

void showEmployeeData(int empNum, float salary) {
    printf("NUMBER = %d", empNum);
    printf("\n");
    printf("SALARY = U$ %.2f\n", salary);
}
