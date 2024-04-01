/*
    @author: Matheus Rebello;
    @date: 01/03/2024;
    @name: Falha do Motor;

*/

#include <stdio.h>


int houve_queda(int n, int* i);


int main(int argc, char const *argv[])
{
    int n;
    int i;
    
    scanf("%d", &n);


    printf("%d\n", houve_queda(n, &i));
        
    return 0;
}

int houve_queda(int n, int* i) {
    *i = 0;

    int rpm, atual, maior = 0;
    
    while (n--) {
        scanf("%d", &rpm);
        atual = rpm;

        if (atual >= maior)
            maior = atual;
        else 
            return (*i) + 1;

        (*i)++;
    }

    return 0;

}