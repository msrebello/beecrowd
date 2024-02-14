#include<stdio.h>

int main(int argc, char const *argv[])
{   
    int n;

    scanf("%d", &n);

    int quantityOfAnimals;
    char type;
    float totalAnimals = 0;
    int totalRabits = 0, totalRats = 0, totalFrogs = 0, percentRabits = 0, percentRats = 0, percentFrogs = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %c", &quantityOfAnimals, &type);

        if(type == 'C')
            totalRabits += quantityOfAnimals;
        else if(type == 'R')
            totalRats += quantityOfAnimals;
        else if(type == 'S')
            totalFrogs += quantityOfAnimals;

        totalAnimals += quantityOfAnimals;
    }

    printf("Total: %.0f cobaias\n", totalAnimals);
    printf("Total de coelhos: %d\n", totalRabits);
    printf("Total de ratos: %d\n", totalRats);
    printf("Total de sapos: %d\n", totalFrogs);
    printf("Percentual de coelhos: %.2f %%\n", totalRabits / totalAnimals * 100);
    printf("Percentual de ratos: %.2f %%\n", totalRats / totalAnimals * 100);
    printf("Percentual de sapos: %.2f %%\n", totalFrogs / totalAnimals * 100);

    return 0;
}
