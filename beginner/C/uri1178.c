#include<stdio.h>

int main(int argc, char const *argv[])
{
    double X;
    double vet[100];

    scanf("%lf", &X);

    vet[0] = X;

    for (int i = 1; i < 100; i++)
    {
        vet[i] = vet[i -1] / 2;
    }
    
    for (int j = 0; j < 100; j++)
    {
        printf("N[%d] = %.4lf\n", j, vet[j]);
    }
    
    return 0;
}
