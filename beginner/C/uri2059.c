/*
    @author: Matheus Rebello;
    @date: 08/03/2024;
    @name: Odd, Even or Cheating;
*/

#include <stdio.h>

#define EVEN 1
#define ODD 0
#define CHEATING 1
#define NOT_CHEATING 0
#define ACUSE 1
#define NOT_ACUSE 0

int main(int argc, char const *argv[])
{
    unsigned short p, j1, j2, r, a;

    scanf("%hu %hu %hu %hu %hu", &p, &j1, &j2, &r, &a);

    if (r == CHEATING)
        if (a == ACUSE)
            printf("Jogador 2 ganha!\n");
        else
            printf("Jogador 1 ganha!\n");
    else
        if (a == ACUSE)
            printf("Jogador 1 ganha!\n");
        else
            if (p == EVEN)
                if ((j1 + j2) % 2 == 0)
                    printf("Jogador 1 ganha!\n");
                else
                    printf("Jogador 2 ganha!\n");
            else
                 if ((j1 + j2) % 2 == 0)
                    printf("Jogador 2 ganha!\n");
                else
                    printf("Jogador 1 ganha!\n");                   

    return 0;
}

