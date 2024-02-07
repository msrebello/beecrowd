#include<stdio.h>

int validateSelection(int a, int b, int c, int d);
void showResponseOfSelection(int result);

int main(int argc, char const *argv[]) {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
 
    showResponseOfSelection(validateSelection(A, B, C, D));

    return 0;
}

int validateSelection(int a, int b, int c, int d) {
    return (b > c && d > a && (c + d > a + b) && (c > 0 && d > 0) && a % 2 == 0) ? 1 : 0;
}

void showResponseOfSelection(int result) {
    if (result == 1)
        printf("Valores aceitos\n");
    else    
        printf("Valores nao aceitos\n");
}