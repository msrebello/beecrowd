#include <stdio.h>

int main() {
    int N[1000];
    int rep;
    
    scanf("%d", &rep);

    for (int i = 0; i < 1000; i++) {
        N[i] = i % rep; // Calcula o valor a ser atribuído a N[i] usando o operador de módulo
    }

    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
    
    return 0;
}
