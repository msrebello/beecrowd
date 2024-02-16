#include<stdio.h>

int main(int argc, char const *argv[])
{
    float num, sum = 0.0;
    int count;

    do
    {
        scanf("%f", &num);

        if(num < 0 || num > 10)
            printf("nota invalida\n");
        else {
            sum += num;
            count++;
        }
        
    } while (count != 2);
    

    float avg = sum / 2;
    printf("media = %.2f\n", avg);

    return 0;
}
