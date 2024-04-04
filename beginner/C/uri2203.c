/*
    @author: Matheus Rebello;
    @date: 03/03/2024;
    @name: Tempestade de Corvos;

*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#define CAST_ULT 1.5

bool atingiu_invasor(int Xf, int Yf, int Xi, int Yi, int Vi, int R1, int R2);

int main(int argc, char const *argv[])
{

    int Xf, Yf; 
    int Xi, Yi;
    int Vi;
    int R1, R2;

    while (scanf ("%d %d %d %d %d %d %d", &Xf, &Yf, &Xi, &Yi, &Vi, &R1, &R2) != EOF) {
        if (atingiu_invasor(Xf, Yf, Xi, Yi, Vi, R1, R2)) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}

bool atingiu_invasor(int Xf, int Yf, int Xi, int Yi, int Vi, int R1, int R2) {
    if (Xf == Xi) {
        return R1 + R2 >= (abs(Yf - Yi) + CAST_ULT * Vi);
    } else if (Yf == Yi) {
        return R1 + R2 >= (abs(Xf - Xi) + CAST_ULT * Vi);
    } else {
        return R1 + R2 >= sqrt(pow(Xf - Xi, 2) + pow(Yf - Yi, 2)) + CAST_ULT * Vi;
    }
}
