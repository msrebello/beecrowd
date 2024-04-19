/*
    @author: Matheus Rebello;
    @date: 19/04/2024;
    @name: Impeachment do Líder;

*/

#include <stdio.h>
#include <stdbool.h>


void ler_voto(int n);
void add_favoraveis();
void zerar_votos_favoraveis();
bool sera_afastado(int vf, int n);

int votos_favoraveis;

int main(int argc, char const *argv[]) {
    int jogadores;
    
    while (scanf("%d", &jogadores) != EOF) {    
        ler_voto(jogadores);
        printf(sera_afastado(votos_favoraveis, jogadores) ? "impeachment\n" : "acusacao arquivada\n");

        zerar_votos_favoraveis();
    }
    return 0;
}

void ler_voto(int n) {
    int voto;
    for (int i = 0; i < n; i++) {
        scanf("%d", &voto);

        if(voto) {
            add_favoraveis();
        }
    }   
}

void add_favoraveis() {
    votos_favoraveis++;
}

bool sera_afastado(int vf, int n) {
    return vf >= 2.f / 3 * n;
}

void zerar_votos_favoraveis() {
    votos_favoraveis = 0;
}