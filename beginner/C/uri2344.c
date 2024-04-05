/*
    @author: Matheus Rebello;
    @date: 05/03/2024;
    @name: Notas da Prova;

*/

#include <stdio.h>

void print_conceito(int nota);

int main(int argc, char const *argv[]) {
    int nota;
    scanf("%d", &nota);

    print_conceito(nota);
    
    return 0;
}

void print_conceito(int nota) {
    if (nota == 0) {
        printf("E\n");
    } else if (nota <= 35) {
        printf("D\n");
    } else if (nota <= 60) {
        printf("C\n");
    } else if (nota <= 85) {
        printf("B\n");
    } else  {
        printf("A\n");
    }
}