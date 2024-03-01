#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned short T1, T2, T3, T4, MAX = 0;

    scanf("%d %d %d %d", &T1, &T2, &T3, &T4);

    MAX = T1 + T2 + T3 + T4 - 3;

    printf("%d\n", MAX);

    return 0;
}
