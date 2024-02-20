#include<stdio.h>

int is_perfect(int num);

int main(int argc, char const *argv[])
{
    int n, x;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (is_perfect(x) == 1)
            printf("%d eh perfeito\n", x);
        else
            printf("%d nao eh perfeito\n", x);
    }
    
    return 0;
}

int is_perfect(int num) {

    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if(num % i == 0)
            sum += i;
    }
    
    return sum == num ? 1 : -1;
}