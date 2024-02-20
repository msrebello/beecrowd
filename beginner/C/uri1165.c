#include<stdio.h>

int is_prime(int num);

int main(int argc, char const *argv[])
{
    int n, x;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (is_prime(x) == 1)
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
    }
    
    return 0;
}

int is_prime(int num) {

    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if(num % i == 0)
            count++;
    }
    
    return count == 2 ? 1 : -1;
}