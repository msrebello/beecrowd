#include<stdio.h>
#include <stdlib.h>

int majorOf(int a, int b, int c);
void showMajor(int value);
int main(int argc, char const *argv[])
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    showMajor(majorOf(A, B, C));

    return 0;
}

int majorOf(int a, int b, int c) {
    return (a + b + abs(a - b)) / 2 > c ? (a + b + abs(a - b)) / 2 : c;
}

void showMajor(int value) {
    printf("%d eh o maior\n", value);
}