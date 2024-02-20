#include<stdio.h>

void replace(int vet[]);

int main(int argc, char const *argv[])
{
    int N[20];

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &N[i]);
    }

    replace(N);

    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }
    
    return 0;
}

void replace(int vet[]) {

    for (int i = 0; i < 10; i++)
    {
        int aux = vet[i];
        vet[i] = vet[19 - i];
        vet[19 - i] = aux;
    }
}
