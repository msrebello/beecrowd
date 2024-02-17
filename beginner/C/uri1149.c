#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, n, sum = 0;
    scanf("%d ", &a);

    do
    {
        scanf("%d", &n);
        if(n > 0) {
        sum  = a;
        for (int i = 1; i < n; i++)
        {
           sum += a + i; 
        }

        printf("%d\n", sum);
        }
            
    } while (n <= 0);
    
    return 0;
}
