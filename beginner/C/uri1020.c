#include<stdio.h>

void convertAgeTo(int age);
int main(int argc, char const *argv[]) {
    int age;
    scanf("%d", &age);

    convertAgeTo(age);

    return 0;
}

void convertAgeTo(int age) {
    int years, months, days;

    years = age / 365;
    months = age % 365 / 30;
    days = age % 365 % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
}