#include<stdio.h>

#define YES 1
#define NO 2

int main(int argc, char const *argv[])
{
    double score, sum = 0;
    int x = 0, count = 0;

    do
    {
        scanf("%lf", &score);

        if(score < 0 || score > 10)
            printf("nota invalida\n");
        else {
            sum += score;
            count++;
        }

        if(count == 2) {
            double avg = sum / 2;

            printf("media = %.2lf\n", avg);
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);

            while (x != YES && x != NO)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &x);
            }

            count = 0;
            sum = 0;
        }
        
    } while (x != NO);
    
    return 0;
}
