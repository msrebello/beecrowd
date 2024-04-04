/*
    @author: Matheus Rebello;
    @date: 03/03/2024;
    @name: Andando no Tempo;

*/

#include <stdio.h>

int voltou_para_o_presente(int a, int b, int c);

int main(int argc, char const *argv[]) {
    int A;
    int B;
    int C;

    scanf("%d %d %d", &A, &B, &C);
    
    if (voltou_para_o_presente(A, B, C)) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}

int voltou_para_o_presente(int a, int b, int c) {
    return a == c || a == b || b == c || a + b == c || a + c == b || b + c == a ? 1 : 0;
}
