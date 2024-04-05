/*
    @author: Matheus Rebello;
    @date: 05/03/2024;
    @name: Patinhos;

*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    long double A;

    do {
        scanf("%Lf", &A);

        if (A == 0) {
            printf("0\n");
        }
        else if (A > 0) {
        printf("%.0Lf\n", --A);
        }

    } while (A != -1);

    return 0;
}