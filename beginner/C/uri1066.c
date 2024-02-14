#include<stdio.h>

#define MAX_REPETITIONS 5

int main(int argc, char const *argv[])
{
    int x = 0, even = 0, odd = 0, negative = 0, positive = 0;
    int number;

    while (x < MAX_REPETITIONS)
    {
        scanf("%d", &number);
        if (number % 2 == 0)
           even++;
        else
            odd++;
        if(number > 0)
            positive++;
        else if(number < 0)
            negative++;
        
        x++;
    }
    
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    
    return 0;
}
