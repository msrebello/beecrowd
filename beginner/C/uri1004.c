#include<stdio.h>

void productOf(int x, int y);
int main(int argc, char const *argv[]) {
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);

    productOf(A, B);
    return 0;
}

void productOf(int x, int y) {
    int PROD = x * y;
    printf("PROD = %d\n", PROD);
}
