#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, x;
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {   
        if(i % 2 == 0)
            printf("%d^2 = %d\n", i, i * i);

        i ++;
    }
    
    return 0;
}
