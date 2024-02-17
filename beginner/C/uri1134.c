#include<stdio.h>

#define ALCOHOL 1
#define GAS 2
#define DIESEL 3
#define END 4

int main(int argc, char const *argv[])
{
    int option, a = 0, g = 0, d = 0;

    do
    {
        scanf("%d", &option);
        
        if(option == ALCOHOL)
            a++;
        else if(option == GAS)
            g++;
        else if(option == DIESEL)
            d++;

    } while (option != END);
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);

    return 0;
}
