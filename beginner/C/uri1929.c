#include <stdio.h>

int main(int argc, char const *argv[])
{
    short a, b, c, d;

    scanf("%hi %hi %hi %hi", &a, &b, &c, &d);

    if (a < b + c && b < a + c && c < a + b)
        printf("S\n");
    else if (a < b + d && b < a + d && d < a + b)
        printf("S\n");
    else if (a < c + d && c < a + d && d < a + c)
        printf("S\n");
    else if (b < c + d && c < b + d && d < c + b)
        printf("S\n");
    else if (b < a + d && a < b + d && d < a + b)
        printf("S\n");
    else if (b < a + c && a < b + c && c < a + b)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
