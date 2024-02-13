#include<stdio.h>

#define PERCENT_1 0.15
#define PERCENT_2 0.12
#define PERCENT_3 0.10
#define PERCENT_4 0.07
#define PERCENT_5 0.04


float howMuchIncreased(float salary, float percent);
int getPercent(float salary);

int main(int argc, char const *argv[]) {
    float salary, moneyEarned = 0.0;
    int percent = 0;

    scanf("%f", &salary);

    percent = getPercent(salary);
    moneyEarned = howMuchIncreased(salary, percent);

    printf("Novo salario: %.2f\n", salary + moneyEarned);
    printf("Reajuste ganho: %.2f\n", moneyEarned);
    printf("Em percentual: %d %%\n", percent);

    return 0;
}

float howMuchIncreased(float salary, float percent) {
    return salary * percent / 100;
}

int getPercent(float salary) {

     if(salary <= 400.0)
        return PERCENT_1 * 100;
    else if(salary <= 800.0)
        return PERCENT_2 * 100;
    else if(salary <= 1200.0)
        return PERCENT_3 * 100;
    else if(salary <= 2000.0)
        return PERCENT_4 * 100;
    else    
        return PERCENT_5 * 100;
}