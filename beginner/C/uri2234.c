/*
    @author: Matheus Rebello;
    @date: 03/03/2024;
    @name: Cachorros-Quentes;

*/

#include <stdio.h>

double media_hotdogs(int h, int p);

int main(int argc, char const *argv[]) {
    int H;
    int P;

    scanf("%d %d", &H, &P);
    printf("%.2lf\n", media_hotdogs(H, P));

    return 0;
}

double media_hotdogs(int h, int p) {
    return (double) h / p;
}
