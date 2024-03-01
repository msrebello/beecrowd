#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned long int n, l, result  = 0;

    scanf("%lu %lu", &n, &l);

    result = n * l;
    printf("%lu\n", result);
    return 0;
}
