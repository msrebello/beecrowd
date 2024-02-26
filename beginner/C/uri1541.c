#include <stdio.h>
#include <math.h>

#define ENDS 0
int main(int argc, char const *argv[])
{
    int a, b, c;

    do
    {
        scanf("%d", &a);

        if (a == ENDS)
            break;

        scanf(" %d", &b);

        if (b == ENDS)
            break;

        scanf(" %d", &c);

        if (c == ENDS)
            break;

        int size_of_land = sqrt(a * b * 100.f / c);

        printf("%d\n", size_of_land);

    } while (1);

    return 0;
}
