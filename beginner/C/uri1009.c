#include<stdio.h>

#define BONUS 0.15 // 15%

double salaryCalculator(double fxSalary, double totalSale);
void showTotalSalary(double finalSalary);
int main(int argc, char const *argv[]) {
    char seller[100];
    double fixedSalary, totalSale;

    scanf("%s", seller);
    scanf("%lf", &fixedSalary);
    scanf("%lf", &totalSale);

    showTotalSalary(salaryCalculator(fixedSalary, totalSale));

    return 0;
}

double salaryCalculator(double fxSalary, double totalSale) {
    return fxSalary + totalSale * BONUS;
}

void showTotalSalary(double finalSalary) {
    printf("TOTAL = R$ %.2lf\n", finalSalary);
}