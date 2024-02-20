#include<stdio.h>

int main(int argc, char const *argv[])
{
    int T, X;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &X);
        unsigned long long first = 0, second = 1, fibo = 0;

        if (X == 0)
            fibo = 0;
        else if (X == 1)
            fibo = 1;
        else
            for (int j = 2; j <= X; j++)
            {
                fibo = first + second;
                first = second;
                second = fibo;
            }

        printf("Fib(%d) = %llu\n", X, fibo);
    }

    return 0;
}
