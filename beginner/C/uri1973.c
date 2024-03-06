#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned long long n;

    scanf("%llu", &n);

    unsigned long long sheeps[n];
    unsigned long long total_sheep = 0;

    for (int i = 0; i < n; i++) {
        scanf(" %llu", &sheeps[i]);
        total_sheep += sheeps[i];
    }

    unsigned long long stolen_sheep = 0;
    unsigned long long count_stars = 0;

    for (int i = 0; i < n;)
    {   
        if(sheeps[i] == 0 && count_stars == 0) {
            count_stars++;
            break;
        }

        if (sheeps[i] == 0 || i < 0)
            break;  

        sheeps[i] -= 1;
        stolen_sheep++;

        if (i >= count_stars)
            count_stars++;

        if ((sheeps[i] + 1) % 2 != 0) i++;
        else if ((sheeps[i] + 1) % 2 == 0) i--;
    }

    unsigned long long non_stolen_sheep = total_sheep - stolen_sheep;
    
    printf("%llu %llu\n",count_stars, non_stolen_sheep);

    return 0;
}
