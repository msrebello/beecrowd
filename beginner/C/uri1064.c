#include<stdio.h>

#define MAX_REPETITIONS 6

int main(int argc, char const *argv[])
{
    int x = 0, count = 0;
    float number, sum = 0;

    while (x < MAX_REPETITIONS)
    {
        scanf("%f", &number);
        if (number > 0) {
           count++;
           sum += number;
        }
        x++;
    }
    
    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum / count);
    
    return 0;
}
