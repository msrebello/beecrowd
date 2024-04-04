/*
    @author: Matheus Rebello;
    @date: 03/03/2024;
    @name: Batalha de Pokemons;

*/

#include <stdio.h>

#define EMPATE 0
#define DABRIEL 1
#define GUARTE 2

int vencedor(int Ad, int Dd, int Ld, int Ag, int Dg, int Lg, int b);

int main(int argc, char const *argv[]) {
    int Ad, Dd, Ld;
    int Ag, Dg, Lg;
    int B;
    int T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &B);
        scanf("%d %d %d", &Ad, &Dd, &Ld);
        scanf("%d %d %d", &Ag, &Dg, &Lg);

        int venc = vencedor(Ad, Dd, Ld, Ag, Dg, Lg, B);

        if (venc == DABRIEL) {
            printf("Dabriel\n");
        } else if (venc == GUARTE) {
            printf("Guarte\n");
        } else {
            printf("Empate\n");
        }
    }

    return 0;
}

int vencedor(int Ad, int Dd, int Ld, int Ag, int Dg, int Lg, int b) {
    int bonusDabriel = (Ld % 2 == 0) ? b : 0;
    int bonusGuarte = (Lg % 2 == 0) ? b : 0;

    int golpeDabriel = (Ad + Dd) / 2 + bonusDabriel;
    int golpeGuarte = (Ag + Dg) / 2 + bonusGuarte;

     if (golpeDabriel > golpeGuarte) {
        return DABRIEL;
     } else if (golpeDabriel < golpeGuarte) {
        return GUARTE;
     } else {
        return EMPATE;
     }
}
