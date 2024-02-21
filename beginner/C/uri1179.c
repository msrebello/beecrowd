#include<stdio.h>

void printeven(int vet[], int rep);
void printodd(int vet[], int rep);


int main(int argc, char const *argv[])
{
    int impar[15], par[15];

    int num, x  = 0, p = 0, i = 0;
    while (x < 15)
    {
        scanf("%d", &num);

        if (num % 2 == 0) { par[p++] = num; }
        else { impar[i++] = num; }

        if (p == 5) { 
            printeven(par, p);
            p = 0;
        }

        else if (i == 5) { 
            printodd(impar, i); 
            i =0;
        }

        x++;
    }

    printodd(impar, i);
    printeven(par, p); 

    return 0;
}

 void printeven(int vet[], int rep) {
    for (int i = 0; i < rep; i++) { 
        printf("par[%d] = %d\n", i, vet[i]);
    }
}

void printodd(int vet[], int rep) {
    for (int i = 0; i < rep; i++) { 
        printf("impar[%d] = %d\n", i, vet[i]);
    }
}
