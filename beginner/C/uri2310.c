/*
    @author: Matheus Rebello;
    @date: 03/03/2024;
    @name: Voleibol;

*/

#include <stdio.h>

int saques = 0;
int bloqueios = 0;
int ataques = 0;
int saques_acertados = 0;
int bloqueios_acertados = 0;
int ataques_acertados = 0;

int main(int argc, char const *argv[]) {
    int N;

    scanf("%d", &N);

    char nome[50];
    int s, s1;
    int b, b1;
    int a, a1;

    for (int i = 0; i < N; i++) {
        scanf("%s", nome);
        scanf("%d %d %d", &s, &b, &a);
        scanf("%d %d %d", &s1, &b1, &a1);
        
        saques += s;
        bloqueios += b;
        ataques += a;
        saques_acertados += s1;
        bloqueios_acertados += b1;
        ataques_acertados += a1;
    }

    printf("Pontos de Saque: %.2lf %%.\n", (double) saques_acertados / saques * 100);
    printf("Pontos de Bloqueio: %.2lf %%.\n", (double) bloqueios_acertados / bloqueios * 100);
    printf("Pontos de Ataque: %.2lf %%.\n", (double) ataques_acertados / ataques * 100);

    return 0;
}