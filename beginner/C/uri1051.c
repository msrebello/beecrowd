#include<stdio.h>

#define SALARY_ONE_THRESHOLD 2000.0
#define SALARY_TWO_THRESHOLD 3000.0
#define SALARY_THREE_THRESHOLD 4500.0

#define TAX_RATE_UP_TO_3000 0.08
#define TAX_RATE_UP_TO_4500 0.18
#define TAX_RATE_ABOVE_4500 0.28

int main(int argc, char const *argv[])
{
    float salary;
    float taxeDue = 0.0;
    scanf("%f", &salary);

    if(salary <= SALARY_ONE_THRESHOLD) {
        printf("Isento\n");
    }
    else {

        if(salary <= SALARY_TWO_THRESHOLD)
            taxeDue = (salary - SALARY_ONE_THRESHOLD) * TAX_RATE_UP_TO_3000;

        else if(salary <= SALARY_THREE_THRESHOLD)
            taxeDue = (salary - SALARY_TWO_THRESHOLD) * TAX_RATE_UP_TO_4500 + ((salary - SALARY_ONE_THRESHOLD) - (salary - SALARY_TWO_THRESHOLD)) * TAX_RATE_UP_TO_3000;

        else
            taxeDue = (salary - SALARY_THREE_THRESHOLD) * TAX_RATE_ABOVE_4500 + ((salary - SALARY_ONE_THRESHOLD) - (salary - SALARY_THREE_THRESHOLD) - 1000.0) * TAX_RATE_UP_TO_4500 + ((salary - SALARY_ONE_THRESHOLD) - (salary - SALARY_THREE_THRESHOLD) - 1500.0) * TAX_RATE_UP_TO_3000;
        
        printf("R$ %.2f\n", taxeDue);
    }  

    return 0;
}
