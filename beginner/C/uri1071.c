#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, maior, sum = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    if(y > x) {
        maior = y;
        y = x;
        x = maior;
    }

    for (y = y + 1; y < x; y++)
    {
        if (y % 2 != 0) {
            sum += y;
            y++;
        }
    }

    printf("%d\n", sum);

    return 0;
}
