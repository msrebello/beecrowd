/*
    @author: Matheus Rebello;
    @date: 19/04/2024;
    @name: Jogatina UFPR;

*/

#include <stdio.h>

#define CS 0

int main(int argc, char const *argv[]) {
    int n, universidade;
    
    while (scanf("%d %d", &n, &universidade) != EOF) {
        int identificador;
        int game;
        int publicacoes = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d %d", &identificador, &game);

            if (identificador == universidade && game == CS) {
                publicacoes++;
            }
        }

        printf("%d\n", publicacoes);
    }

    return 0;
}
