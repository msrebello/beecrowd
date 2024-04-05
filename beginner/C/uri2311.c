/*
    @author: Matheus Rebello;
    @date: 05/03/2024;
    @name: Saltos Ornamentais;

*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    
    double GD;
    double notas[7];
    char nome[50];
    int notas_length = sizeof(notas) / sizeof(notas[0]);

    for (int i = 0; i < N; i++) {
        scanf("%s", nome);
        scanf("%lf", &GD);

        double menor_nota = 10.f;
        double maior_nota = 0.f;
        double soma = 0;

        for (int j = 0; j < notas_length; j++) {
            scanf("%lf", &notas[j]);

            soma += notas[j];

            if (notas[j] > maior_nota) {
                maior_nota = notas[j];
            }
            if (notas[j] < menor_nota) {
                menor_nota = notas[j];
            }
        }

        getchar();

        double resultado_competicao = GD * (soma - maior_nota - menor_nota);

        printf("%s %.2lf\n", nome, resultado_competicao);
        
    }

    return 0;
}