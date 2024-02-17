#include<stdio.h>

#define YES 1
#define NO 2

int main(int argc, char const *argv[])
{
    int goalsInter, goalsGremio, inter = 0, gremio = 0, x = 0, draws = 0;

    do
    {
        scanf("%d %d", &goalsInter, &goalsGremio);

        if(goalsInter > goalsGremio)
            inter++;
        else if(goalsInter < goalsGremio)
            gremio++;
        else
            draws++;
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &x);
    } while (x != NO);

    printf("%d grenais\n", inter + gremio);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", draws);

    if(inter > gremio)
        printf("Inter venceu mais\n");
    else if(inter < gremio)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
          
    return 0;
}
