/*
    @author: Matheus Rebello;
    @date: 08/03/2024;
    @name: Rock, Paper, Airstrike;
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char player_1[7], player_2[7];

    unsigned short int n;

    scanf("%hd", &n);

    while (n--)
    {
        scanf("%s", player_1);
        scanf(" %s", player_2);

        if (player_1[1] == 't')
            if (player_2[1] == 'e' || player_2[1] == 'a')
                printf("Jogador 1 venceu\n");
            else
                printf("Aniquilacao mutua\n");
        else if (player_1[1] == 'e')
            if (player_2[1] == 't')
                printf("Jogador 2 venceu\n");
            else if (player_2[1] == 'e')
                printf("Sem ganhador\n");
            else
                printf("Jogador 1 venceu\n");
        else if (player_1[1] == 'a')
            if (player_2[1] == 't' || player_2[1] == 'e')
                printf("Jogador 2 venceu\n");
            else
                printf("Ambos venceram\n");
    }

    return 0;
}
