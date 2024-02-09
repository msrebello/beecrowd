#include<stdio.h>

void sortNumbers(int* a, int* b, int* c);
void swap(int*, int*);
void showSortedNumbers(int, int, int, int, int, int);

int main(int argc, char const *argv[]) {
    int a, b, c, x = 0, y = 0, z = 0;
    scanf("%d %d %d", &a, &b, &c);

    x = a;
    y = b;
    z = c;
    sortNumbers(&a, &b, &c);
    showSortedNumbers(a, b, c, x, y, z);

    return 0;
}

void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void sortNumbers(int* a, int* b, int* c) {
    int aux;

    if(*a > *c)
        swap(a, c);
    if(*a > *b)
        swap(a, b);
    if(*b > *c)
        swap(b, c);
}

void showSortedNumbers(int a, int b, int c, int x, int y, int z) {
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
}