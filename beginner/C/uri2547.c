/*
    @author: Matheus Rebello;
    @date: 17/04/2024;
    @name: Montanha-Russa;

*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;
    int h_min, h_max;
    
    while (scanf("%d %d %d", &n, &h_min, &h_max) != EOF) {
        int h_visitante;
        int cont = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &h_visitante);

            if (h_visitante >= h_min && h_visitante <= h_max) {
                cont++;
            }
        }

        printf("%d\n", cont);   
    }

    return 0;
}
