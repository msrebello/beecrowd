#include<stdio.h>

#define MAX_REPETITIONS 6


int main(int argc, char const *argv[])
{
    int x, count = 0;
    scanf("%d", &x);

    for (int i = x; count < MAX_REPETITIONS; x++)
    {
        if (x % 2 != 0) {
            printf("%d\n", x);
            x ++;
            count++;  
        }
    }
    
    return 0;
}
