#include<stdio.h>

#define MAX_REPETITIONS 5

int main(int argc, char const *argv[])
{
    int x = 0, count = 0;
    int number;

    while (x < MAX_REPETITIONS)
    {
        scanf("%d", &number);
        if (number % 2 == 0)
           count++;
        
        x++;
    }
    
    printf("%d valores pares\n", count);
    
    return 0;
}
