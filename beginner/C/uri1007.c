#include<stdio.h>

int difference(int a, int b, int c, int d);
void showResult(int difference);

int main(int argc, char const *argv[]) {
    int A, B, C, D;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    showResult(difference(A, B, C, D));
    
    return 0;
}

int difference(int a, int b, int c, int d) {
    return a * b - c * d;
}

void showResult(int difference) {
    printf("DIFERENCA = %d\n", difference);
}