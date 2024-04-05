/*
    @author: Matheus Rebello;
    @date: 05/03/2024;
    @name: Qual Triângulo;

*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define EQUILATERO 1
#define ESCALENO 2
#define ISOCELES 3

bool eh_triangulo(int a, int b, int c);
bool eh_retangulo(int a, int b, int c);
int tipo_triangulo(int a, int b, int c);

int main(int argc, char const *argv[]) {
    int A;
    int B;
    int C;
    scanf("%d %d %d", &A, &B, &C);

    if (!eh_triangulo(A, B, C)) {
        printf("Invalido\n");
    } else {
        int triangulo = tipo_triangulo(A, B, C);

        printf("Valido-");

        if (triangulo == EQUILATERO) {
            printf("Equilatero\n");
        } else if (triangulo == ESCALENO) {
            printf("Escaleno\n");
        } else {
            printf("Isoceles\n");
        }

        printf("Retangulo: ");

        if (eh_retangulo(A, B, C)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }
    
    return 0;
}

bool eh_triangulo(int a, int b, int c) {
   return (a + b > c) && (a + c > b) && (b + c > a);
}

bool eh_retangulo(int a, int b, int c) {
    int hipotenusa_c = 0;
    int cateto_a = 0;
    int cateto_b = 0;

    if (a > b && b > c) {
        hipotenusa_c = a;
        cateto_a = b;
        cateto_b = c;
    } else if (b > c) {
        hipotenusa_c = b;
        cateto_a = a;
        cateto_b = c;
    } else {
        hipotenusa_c = c;
        cateto_a = b;
        cateto_b = a;
    }

    return pow(hipotenusa_c, 2) == pow(cateto_a, 2) + pow(cateto_b, 2);
}

int tipo_triangulo(int a, int b, int c) {
    if (a == b && b == c) {
        return EQUILATERO;
    } else if (a != b && b != c && a != c) {
        return ESCALENO;
    } else {
        return ISOCELES;
    }
}

