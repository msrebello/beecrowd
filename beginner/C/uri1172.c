#include<stdio.h>

void replace_all_negative_and_nul_numbers(int vet[]);

int main(int argc, char const *argv[])
{
    int x[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }

    replace_all_negative_and_nul_numbers(x);

    for (int i = 0; i < 10; i++)
    {
        printf("X[%d] = %d\n", i, x[i]);
    }
    
    
    return 0;
}

void replace_all_negative_and_nul_numbers(int vet[]) {

    for (int i = 0; i < 10; i++)
    {
       if(vet[i] == 0 || vet[i] < 0)
            vet[i] = 1;
    }
    
}