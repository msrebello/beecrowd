#include <stdio.h>

int main(int argc, char const *argv[])
{
    int cases;
    int r1, r2, R;
    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%d %d", &r1, &r2);
        R = r1 + r2;
        printf("%d\n", R);
    }

    return 0;
}
