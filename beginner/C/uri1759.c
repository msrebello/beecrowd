#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            if (n > 1)
                printf("Ho");
            else
                printf("Ho!\n");
        
        else if (i == n)
            printf(" Ho!\n");
        else
            printf(" Ho");
    }
    

    return 0;
}
