#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x, maior = 0, position;
    for (int i = 1; i <= 100; i++)
    {
        scanf("%d", &x);
        
        if(x > maior) {
            maior = x;
            position = i;
        }
    }
    printf("%d\n%d\n", maior, position);
    return 0;
}
