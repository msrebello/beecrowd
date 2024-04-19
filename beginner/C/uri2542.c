/*
    @author: Matheus Rebello;
    @date: 19/04/2024;
    @name: Iu-Di-Oh!;

*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;
    
    while (scanf("%d", &n) != EOF) {
        int m, l;
        scanf("%d %d", &m, &l);

        int mat_m[m][n];
        int mat_n[l][n];
        int turno = 2;
        int linha_atual = m;
        int (*aux_mat)[n] = mat_m;

        while (turno--) {
            for (int i = 0; i < linha_atual; i++) {
                for (int j = 0; j < n; j++) {
                    scanf("%d", &aux_mat[i][j]);
                }
            }

            linha_atual = l;
            aux_mat = mat_n;
        }

        int carta_m;
        int carta_l;
        scanf("%d %d", &carta_m, &carta_l);
        carta_m--; // ajusta carta do marcos para posicao do array
        carta_l--; // ajusta carta do leonardo para posicao do array

        int atributo;
        scanf("%d", &atributo);
        atributo--; // ajusta atributo para posicao do array

        if (mat_m[carta_m][atributo] == mat_n[carta_l][atributo]) {
            printf("Empate\n");
        } else {
            if (mat_m[carta_m][atributo] > mat_n[carta_l][atributo]) {
                printf("Marcos\n");
            } else {
                printf("Leonardo\n");
            }
        }
    }

    return 0;
}
