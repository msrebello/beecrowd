/*
    @author: Matheus Rebello;
    @date: 24/04/2024;
    @name: Estágio;

*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
    int n;


    while (scanf("%d", &n) != EOF) {
        
        int m, c;
        int soma_cima = 0, soma_baixo = 0;
        while (n--) {
            scanf("%d %d", &m, &c);
            soma_cima += m * c;
            soma_baixo += c;
        }

        float IRA = soma_cima / (soma_baixo * 100.f);
        printf("%.4f\n", IRA);
        
    }

    return 0;
}
