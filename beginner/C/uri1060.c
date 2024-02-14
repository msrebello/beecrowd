#include<stdio.h>

#define MAX_REPETITIONS 6

int main(int argc, char const *argv[])
{
    int x = 0, count = 0;
    float number;

    while (x < MAX_REPETITIONS)
    {
        scanf("%f", &number);
        if (number > 0)
           count++;
        
        x++;
    }
    
    printf("%d valores positivos\n", count);
    
    return 0;
}
