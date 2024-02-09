#include<stdio.h>

int areMultiples(int number1, int number2);

int main(int argc, char const *argv[]) {
    int a, b;
    scanf("%d %d", &a, &b);

    if(areMultiples(a, b) == 1)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");

    return 0;
}

int areMultiples(int number1, int number2) {
    return (number1 % number2 == 0 || number2 % number1 == 0) ? 1 : 0;
}