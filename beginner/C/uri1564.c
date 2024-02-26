#include <stdio.h>

int main(int argc, char const *argv[])
{
    int complaints;

    while (scanf("%d", &complaints) != EOF)
    {
        if (complaints > 0)
            printf("vai ter duas!\n");
        else
            printf("vai ter copa!\n");
    }

    return 0;
}
