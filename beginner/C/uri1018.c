#include<stdio.h>

void calculateBAnkNotes(int value, int* n100, int* n50, int* n20, int* n10, int* n5, int* n2, int* n1);
void showAllBankNotes(int n100, int n50, int n20, int n10, int n5, int n2, int n1);

int main(int argc, char const *argv[]) {
    int value;
    int note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;
    
    scanf("%d", &value);

    calculateBAnkNotes(value, &note100, &note50, &note20, &note10, &note5, &note2, &note1);
    printf("%d\n", value);
    showAllBankNotes(note100, note50, note20, note10, note5, note2, note1);

    return 0;
}

void calculateBankNotes(int value, int* n100, int* n50, int* n20, int* n10, int* n5, int* n2, int* n1) {
    *n100 = value / 100;
    *n50 = value % 100 / 50;
    *n20 = value % 100 % 50 / 20;
    *n10 = value % 100 % 50 % 20 / 10;
    *n5 = value % 100 % 50 % 20 % 10 / 5;
    *n2 = value % 100 % 50 % 20 % 10 % 5 / 2;
    *n1 = value % 100 % 50 % 20 % 10 % 5 % 2 / 1;
}

void showAllBankNotes(int n100, int n50, int n20, int n10, int n5, int n2, int n1) {
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
}