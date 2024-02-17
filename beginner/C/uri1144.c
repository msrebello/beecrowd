#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    for (unsigned long i = 1; i <= n; i++)
    {
        printf("%lu %.0f %.0f\n", i, pow(i,2), pow(i,3));
        printf("%lu %.0f %.0f\n", i, pow(i,2) + 1, pow(i,3) + 1);
    }
    
    return 0;
}
