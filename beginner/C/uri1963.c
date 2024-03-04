#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b;

    scanf("%f %f", &a, &b);

    float increase = (b - a) * 100 / a;
    printf("%.2f%%\n", increase);

    return 0;
}
