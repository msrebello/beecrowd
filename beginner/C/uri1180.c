#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);

    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    
    int menor = x[0], pos = 0;
    for (int i = 0; i < n; i++)
    {
        if(x[i] < menor) {
            menor = x[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menor, pos);
    
    return 0;
}
