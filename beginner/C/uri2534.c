/*
    @author: Matheus Rebello;
    @date: 19/04/2024;
    @name: Exame Geral;

*/

#include <stdio.h>

void ler_notas(int arr[], int size_arr);
void ordenar_notas(int arr[], int size_arr);
int consultar_nota(int n, int arr[]);

int main(int argc, char const *argv[]) {
    int habitantes;
    int consultas;
    
    while (scanf("%d %d", &habitantes, &consultas) != EOF) {    
        int notas[habitantes];

        ler_notas(notas, habitantes);
        ordenar_notas(notas, habitantes);

        int num_consulta;
        
        for (int i = 0; i < consultas; i++) {
            scanf("%d", &num_consulta);
            printf("%d\n", consultar_nota(num_consulta, notas));
        }
    }
    return 0;
}

void ler_notas(int arr[], int size_arr) {
    for (int i = 0; i < size_arr; i++) {
        scanf("%d", &arr[i]);
    }
}

void ordenar_notas(int arr[], int size_arr) {
    for (int i = 0; i < size_arr; i++) {
        int maior = arr[i];
        for (int j = i + 1; j < size_arr; j++) {
            if (arr[j] > arr[i]) {
                int aux = arr[j];
                arr[j] = arr[i];
                arr[i] = aux;
            }
        } 
    }
}

int consultar_nota(int n, int arr[]) {
    return arr[n - 1];
}