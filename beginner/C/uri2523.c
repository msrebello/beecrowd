/*
    @author: Matheus Rebello;
    @date: 24/04/2024;
    @name: A Mensagem de Will;

*/

#include <stdio.h>
#include <math.h>
#include <string.h>

void concatenar(char arr_dest[], const char letra, int index) {
    arr_dest[index] = letra;
}

char buscar_letra(char arr[], int index) {
    return arr[index];
}

int main(int argc, char const *argv[]) {
    char alfabeto[27];


    while (scanf("%s", alfabeto) != EOF) {
        int n;
        scanf("%d ", &n);

        int indice;
        char mensagem[11000] = {};
        for (int i = 0; i < n; i++) {
            scanf("%d", &indice);
            
            concatenar(mensagem, buscar_letra(alfabeto, indice - 1), i);
        }

        printf("%s\n", mensagem);
    }

    return 0;
}
