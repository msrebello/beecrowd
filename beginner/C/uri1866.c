#include <stdio.h>

int main(int argc, char const *argv[])
{
    int C, number;
    
    scanf("%d", &C);

    while (C--)
    {
        scanf("%d", &number);

        if (number % 2 == 0)
            printf("0\n");
        else
            printf("1\n");
    }
    
    return 0;
}
