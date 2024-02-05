#include<stdio.h>

void sum(int x, int y);

int main(int argc, char const *argv[]) {
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);

    sum(A, B);

    return 0;
}

void sum(int x, int y) {
    printf ("SOMA = %d\n" , x + y);
}
