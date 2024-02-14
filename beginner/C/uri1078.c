#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, n, i * n);
    }
    
    return 0;
}
